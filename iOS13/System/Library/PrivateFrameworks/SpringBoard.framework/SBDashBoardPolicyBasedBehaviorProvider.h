/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>

@class CSCoverSheetViewController, SBMainDisplayPolicyAggregator, NSString;

@interface SBDashBoardPolicyBasedBehaviorProvider : NSObject <CSExternalBehaviorProviding> {

	CSCoverSheetViewController* _coverSheetViewController;
	SBMainDisplayPolicyAggregator* _policyAggregator;
	id _notificationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(void)dealloc;
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(long long)participantState;
-(NSString *)coverSheetIdentifier;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;
-(unsigned long long)_cameraRestrictions;
-(unsigned long long)_restrictedCapability:(unsigned long long)arg1 forAggregatorCapability:(long long)arg2 ;
-(id)initWithCoverSheetViewController:(id)arg1 policyAggregator:(id)arg2 ;
@end

