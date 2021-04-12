/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBBiometricMonitorDataSource.h>

@class NSMutableSet, NSString;

@interface SBBiometricMonitorTestRecipeDummyDataSource : NSObject <SBBiometricMonitorDataSource> {

	NSMutableSet* _observers;
	long long _state;
	BOOL _poseIsMarginal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL presenceDetectRunning; 
@property (nonatomic,readonly) BOOL matchRunning; 
@property (nonatomic,readonly) BOOL poseIsMarginal;                     //@synthesize poseIsMarginal=_poseIsMarginal - In the implementation block
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)matchRunning;
-(BOOL)presenceDetectRunning;
-(BOOL)poseIsMarginal;
-(void)cycleState;
@end

