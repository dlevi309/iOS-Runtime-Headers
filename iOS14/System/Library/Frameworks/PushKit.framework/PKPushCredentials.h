/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
*/


@class NSString, NSData;

@interface PKPushCredentials : NSObject {

	NSString* _type;
	NSData* _token;

}

@property (copy) NSString * type;              //@synthesize type=_type - In the implementation block
@property (copy) NSData * token;               //@synthesize token=_token - In the implementation block
-(void)setType:(NSString *)arg1 ;
-(void)setToken:(NSData *)arg1 ;
-(NSString *)type;
-(NSData *)token;
@end

