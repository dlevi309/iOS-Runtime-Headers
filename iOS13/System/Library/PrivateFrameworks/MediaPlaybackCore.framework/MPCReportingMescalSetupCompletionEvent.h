/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPCReportingEvent.h>

@class NSError, NSString;

@interface MPCReportingMescalSetupCompletionEvent : NSObject <MPCReportingEvent> {

	NSError* _error;
	double _setupDuration;

}

@property (nonatomic,retain) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) double setupDuration;                  //@synthesize setupDuration=_setupDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isValidReportingEvent;
-(unsigned long long)reportingEventType;
-(double)setupDuration;
-(void)setSetupDuration:(double)arg1 ;
@end

