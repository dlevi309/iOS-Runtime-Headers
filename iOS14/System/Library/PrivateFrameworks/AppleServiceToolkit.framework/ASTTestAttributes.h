/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/


@class NSNumber, NSString, NSDictionary;

@interface ASTTestAttributes : NSObject {

	NSNumber* _testId;
	NSString* _version;

}

@property (nonatomic,readonly) NSDictionary * dictionary; 
@property (nonatomic,retain) NSNumber * testId;                        //@synthesize testId=_testId - In the implementation block
@property (nonatomic,retain) NSString * version;                       //@synthesize version=_version - In the implementation block
+(id)attributesWithTestId:(id)arg1 version:(id)arg2 ;
-(id)init;
-(id)description;
-(NSNumber *)testId;
-(NSDictionary *)dictionary;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(id)initWithTestId:(id)arg1 version:(id)arg2 ;
-(void)setTestId:(NSNumber *)arg1 ;
@end

