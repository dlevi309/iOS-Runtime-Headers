/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)currentLocation;
-(id)init;
-(BOOL)handleEvent:(unsigned long long)arg1 withContext:(id)arg2 ;
-(void)setCurrentLocation:(unsigned long long)arg1 ;
@end

