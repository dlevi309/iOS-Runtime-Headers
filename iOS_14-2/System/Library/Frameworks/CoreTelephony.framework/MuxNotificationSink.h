/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <Foundation/NSProxy.h>
#import <CoreTelephony/CoreTelephonyClientDelegateProxyInterface.h>

@protocol MuxNotificationSinkDelegate;
@class NSString;

@interface MuxNotificationSink : NSProxy <CoreTelephonyClientDelegateProxyInterface> {

	id<MuxNotificationSinkDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MuxNotificationSinkDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MuxNotificationSinkDelegate>)delegate;
-(void)setDelegate:(id<MuxNotificationSinkDelegate>)arg1 ;
-(void)clientDidTriggerFault:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

