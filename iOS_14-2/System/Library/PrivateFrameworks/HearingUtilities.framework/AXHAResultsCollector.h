/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <libobjc.A.dylib/AXHADetectorManagerDelegate.h>

@class NSMutableArray, NSError, NSArray, NSString;

@interface AXHAResultsCollector : NSObject <AXHADetectorManagerDelegate> {

	NSMutableArray* _results;
	BOOL _didFinish;
	NSError* _error;

}

@property (readonly) NSArray * results; 
@property (readonly) BOOL didFinish; 
@property (readonly) NSError * error; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)results;
-(id)init;
-(NSError *)error;
-(BOOL)didFinish;
-(void)receivedObservation:(id)arg1 forDetector:(id)arg2 ;
-(void)receivedCompletion:(id)arg1 ;
-(void)receivedError:(id)arg1 fromDetector:(id)arg2 ;
@end

