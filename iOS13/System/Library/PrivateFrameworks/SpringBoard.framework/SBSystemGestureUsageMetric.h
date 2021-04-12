/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBFAnalyticsBackendEventHandling.h>

@class NSMutableDictionary, NSString;

@interface SBSystemGestureUsageMetric : NSObject <SBFAnalyticsBackendEventHandling> {

	NSMutableDictionary* _typeToMetric;
	unsigned long long _currentLocation;

}

@property (assign,nonatomic) unsigned long long currentLocation;              //@synthesize currentLocation=_currentLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)handleEvent:(unsigned long long)arg1 withContext:(id)arg2 ;
-(unsigned long long)currentLocation;
-(void)setCurrentLocation:(unsigned long long)arg1 ;
@end

