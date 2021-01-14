/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBBiometricMonitorDataSource.h>

@class NSMutableSet, NSString;

@interface SBBiometricMonitorTestRecipeDummyDataSource : NSObject <SBBiometricMonitorDataSource> {

	NSMutableSet* _observers;
	long long _state;
	BOOL _poseIsMarginal;

}

@property (nonatomic,readonly) BOOL presenceDetectRunning; 
@property (nonatomic,readonly) BOOL matchRunning; 
@property (nonatomic,readonly) BOOL poseIsMarginal;                     //@synthesize poseIsMarginal=_poseIsMarginal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)matchRunning;
-(BOOL)presenceDetectRunning;
-(BOOL)poseIsMarginal;
-(void)cycleState;
@end

