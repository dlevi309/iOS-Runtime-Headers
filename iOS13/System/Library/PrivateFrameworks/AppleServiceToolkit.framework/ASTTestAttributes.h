/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDictionary *)dictionary;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(NSNumber *)testId;
-(id)initWithTestId:(id)arg1 version:(id)arg2 ;
-(void)setTestId:(NSNumber *)arg1 ;
@end

