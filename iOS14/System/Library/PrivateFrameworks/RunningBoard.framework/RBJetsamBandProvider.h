/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)defaultPriorityForProcess:(id)arg1 inBand:(unsigned char)arg2 ;
-(int)jetsamPriorityForProcess:(id)arg1 withState:(id)arg2 ;
-(id)initWithEntitlementManager:(id)arg1 ;
@end

