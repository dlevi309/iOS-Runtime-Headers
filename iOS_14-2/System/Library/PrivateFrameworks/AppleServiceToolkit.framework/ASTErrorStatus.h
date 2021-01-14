/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/


@class NSNumber, NSString, NSMutableDictionary;

@interface ASTErrorStatus : NSObject {

	NSNumber* _code;
	NSString* _reason;
	NSMutableDictionary* _data;

}

@property (nonatomic,retain) NSNumber * code;                         //@synthesize code=_code - In the implementation block
@property (nonatomic,retain) NSString * reason;                       //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * data;              //@synthesize data=_data - In the implementation block
+(id)errorStatusWithCode:(long long)arg1 ;
-(id)init;
-(void)setData:(NSMutableDictionary *)arg1 ;
-(void)setCode:(NSNumber *)arg1 ;
-(id)dictionary;
-(NSMutableDictionary *)data;
-(NSString *)reason;
-(NSNumber *)code;
-(void)setReason:(NSString *)arg1 ;
-(id)reasonForCode:(id)arg1 ;
@end

