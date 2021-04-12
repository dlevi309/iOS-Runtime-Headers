/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/BBObserverDelegate.h>

@protocol BBObserverDelegate, BLTBBObserverDelegateDelegate;
@class NSString;

@interface BLTBBObserverDelegate : NSObject <BBObserverDelegate> {

	id<BBObserverDelegate> _actualDelegate;
	id<BLTBBObserverDelegateDelegate> _delegate;

}

@property (__weak) id<BBObserverDelegate> actualDelegate;                                    //@synthesize actualDelegate=_actualDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<BLTBBObserverDelegateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id<BLTBBObserverDelegateDelegate>)delegate;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)setDelegate:(id<BLTBBObserverDelegateDelegate>)arg1 ;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id<BBObserverDelegate>)actualDelegate;
-(void)setActualDelegate:(id<BBObserverDelegate>)arg1 ;
@end

