/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <libobjc.A.dylib/BNPresentableQueueDelegate.h>
#import <libobjc.A.dylib/BNPending.h>

@class NSMutableArray, NSMutableSet, BNSuspensionController, NSString, NSSet;

@interface BNPenderQueue : NSObject <BNPresentableQueueDelegate, BNPending> {

	NSMutableArray* _penderQueue;
	NSMutableSet* _suspendedPenders;
	BNSuspensionController* _suspensionController;
	NSString* _penderIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * penderIdentifier;                           //@synthesize penderIdentifier=_penderIdentifier - In the implementation block
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (nonatomic,copy,readonly) NSSet * activeSuspensionReasons; 
-(BOOL)isSuspended;
-(BOOL)setSuspended:(BOOL)arg1 forReason:(id)arg2 ;
-(void)presentableQueue:(id)arg1 didDequeuePresentableWithPendingIdentifier:(id)arg2 ;
-(BOOL)setPenderSuspended:(BOOL)arg1 forRequesterWithIdentifier:(id)arg2 reason:(id)arg3 ;
-(NSSet *)activeSuspensionReasons;
-(id)peekPresentable;
-(NSString *)penderIdentifier;
-(id)pullPresentablesWithIdentification:(id)arg1 ;
-(void)setPenderIdentifier:(NSString *)arg1 ;
-(void)enqueuePresentable:(id)arg1 withOptions:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(id)_penderForRequesterWithIdentifier:(id)arg1 creatingIfNecessary:(BOOL)arg2 ;
@end

