/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPCReportingEvent.h>

@class SSVPlayActivityEvent, NSString;

@interface MPCReportingPlaybackActivityEvent : NSObject <MPCReportingEvent> {

	BOOL _shouldReportToStore;
	SSVPlayActivityEvent* _playActivityEvent;

}

@property (nonatomic,copy) SSVPlayActivityEvent * playActivityEvent;              //@synthesize playActivityEvent=_playActivityEvent - In the implementation block
@property (assign,nonatomic) BOOL shouldReportToStore;                            //@synthesize shouldReportToStore=_shouldReportToStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(BOOL)isValidReportingEvent;
-(unsigned long long)reportingEventType;
-(SSVPlayActivityEvent *)playActivityEvent;
-(BOOL)shouldReportToStore;
-(void)setPlayActivityEvent:(SSVPlayActivityEvent *)arg1 ;
-(void)setShouldReportToStore:(BOOL)arg1 ;
@end

