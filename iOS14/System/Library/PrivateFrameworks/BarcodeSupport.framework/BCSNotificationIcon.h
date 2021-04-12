/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/


@protocol BCSAction;
@class NSURL;

@interface BCSNotificationIcon : NSObject {

	id<BCSAction> _action;

}

@property (nonatomic,copy,readonly) NSURL * imageURL; 
+(id)nfcIcon;
+(id)qrCodeIcon;
-(id)initWithAction:(id)arg1 ;
-(NSURL *)imageURL;
-(id)_clipIconURLForAction:(id)arg1 scale:(double)arg2 ;
-(id)_notificationIconDataURLForApp:(id)arg1 scale:(float)arg2 ;
@end

