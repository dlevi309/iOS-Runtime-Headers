/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id<BLTBBObserverDelegateDelegate>)delegate;
-(void)setDelegate:(id<BLTBBObserverDelegateDelegate>)arg1 ;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2 ;
-(id<BBObserverDelegate>)actualDelegate;
-(void)setActualDelegate:(id<BBObserverDelegate>)arg1 ;
@end

