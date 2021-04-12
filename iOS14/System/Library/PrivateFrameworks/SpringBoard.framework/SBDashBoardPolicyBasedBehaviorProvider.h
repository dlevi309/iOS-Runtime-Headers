/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>

@class CSCoverSheetViewController, SBMainDisplayPolicyAggregator, NSString;

@interface SBDashBoardPolicyBasedBehaviorProvider : NSObject <CSExternalBehaviorProviding> {

	CSCoverSheetViewController* _coverSheetViewController;
	SBMainDisplayPolicyAggregator* _policyAggregator;
	id _notificationToken;

}

@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(void)conformsToCSExternalBehaviorProviding;
-(unsigned long long)_restrictedCapability:(unsigned long long)arg1 forAggregatorCapability:(long long)arg2 ;
-(long long)notificationBehavior;
-(void)conformsToCSBehaviorProviding;
-(unsigned long long)_cameraRestrictions;
-(long long)proximityDetectionMode;
-(NSString *)coverSheetIdentifier;
-(long long)participantState;
-(long long)scrollingStrategy;
-(id)initWithCoverSheetViewController:(id)arg1 policyAggregator:(id)arg2 ;
-(unsigned long long)restrictedCapabilities;
-(void)dealloc;
@end

