/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@class CXCallObserver, NSString;

@interface HMDPhoneCallObserver : HMFObject <CXCallObserverDelegate> {

	CXCallObserver* _observer;

}

@property (nonatomic,retain) CXCallObserver * observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPhoneCallObserver;
-(id)init;
-(CXCallObserver *)observer;
-(void)setObserver:(CXCallObserver *)arg1 ;
-(void)startObserving;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(BOOL)hasActiveCalls;
-(BOOL)isActiveCall:(id)arg1 ;
@end

