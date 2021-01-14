/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPCReportingEvent.h>

@class ICPlayActivityEvent, NSString;

@interface MPCReportingPlaybackActivityEvent : NSObject <MPCReportingEvent> {

	BOOL _shouldReportToStore;
	ICPlayActivityEvent* _playActivityEvent;

}

@property (nonatomic,copy) ICPlayActivityEvent * playActivityEvent;              //@synthesize playActivityEvent=_playActivityEvent - In the implementation block
@property (assign,nonatomic) BOOL shouldReportToStore;                           //@synthesize shouldReportToStore=_shouldReportToStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(BOOL)isValidReportingEvent;
-(unsigned long long)reportingEventType;
-(ICPlayActivityEvent *)playActivityEvent;
-(BOOL)shouldReportToStore;
-(void)setPlayActivityEvent:(ICPlayActivityEvent *)arg1 ;
-(void)setShouldReportToStore:(BOOL)arg1 ;
@end

