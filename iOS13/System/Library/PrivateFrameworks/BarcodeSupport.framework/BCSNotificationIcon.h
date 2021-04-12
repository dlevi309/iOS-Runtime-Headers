/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_notificationIconDataURLForApp:(id)arg1 scale:(float)arg2 ;
-(id)_notificationIconBaseURL;
@end

