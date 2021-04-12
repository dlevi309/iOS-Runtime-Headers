/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/

#import <libobjc.A.dylib/PREResponsesMetricsProtocol.h>

@protocol PREResponsesTrialProtocol;
@class PETEventTracker2, NSObject, NSString;

@interface PREResponsesMetricsPET : NSObject <PREResponsesMetricsProtocol> {

	PETEventTracker2* _tracker;
	NSObject*<PREResponsesTrialProtocol> _trial;
	BOOL _isApricotDevice;
	NSString* _processName;

}
-(id)tracker;
-(BOOL)isApricotDevice;
-(void)registerResponsesGenerated:(id)arg1 ;
-(void)registerResponseTapped:(id)arg1 ;
-(id)initWithTrial:(id)arg1 ;
-(id)initWithTracker:(id)arg1 trial:(id)arg2 ;
-(id)_responseListFromGeneratedEvent:(id)arg1 ;
@end

