/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

