/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <libobjc.A.dylib/RBJetsamBandProviding.h>

@protocol RBEntitlementManaging;
@class NSString;

@interface RBJetsamBandProvider : NSObject <RBJetsamBandProviding> {

	id<RBEntitlementManaging> _entitlementManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(int)jetsamPriorityForProcess:(id)arg1 withState:(id)arg2 ;
-(id)initWithEntitlementManager:(id)arg1 ;
-(int)_inactiveJetsamPriorityForProcess:(id)arg1 state:(id)arg2 ;
-(int)_backgroundJetsamPriorityForProcess:(id)arg1 state:(id)arg2 ;
-(int)_foregroundJetsamPriorityForProcess:(id)arg1 state:(id)arg2 ;
-(int)defaultPriorityForProcess:(id)arg1 inBand:(unsigned char)arg2 ;
@end

