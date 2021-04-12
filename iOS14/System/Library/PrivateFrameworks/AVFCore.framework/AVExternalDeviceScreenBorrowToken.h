/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class AVExternalDevice, NSString;

@interface AVExternalDeviceScreenBorrowToken : NSObject {

	AVExternalDevice* _externalDevice;
	NSString* _client;
	NSString* _reason;

}

@property (nonatomic,readonly) NSString * client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
-(NSString *)client;
-(id)init;
-(id)initWithExternalDevice:(id)arg1 client:(id)arg2 reason:(id)arg3 ;
-(NSString *)reason;
-(void)dealloc;
@end

