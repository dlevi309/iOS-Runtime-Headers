/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class AVExternalDevice, NSString;

@interface AVExternalDeviceScreenBorrowToken : NSObject {

	AVExternalDevice* _externalDevice;
	NSString* _client;
	NSString* _reason;

}

@property (nonatomic,readonly) NSString * client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)reason;
-(NSString *)client;
-(id)initWithExternalDevice:(id)arg1 client:(id)arg2 reason:(id)arg3 ;
@end

