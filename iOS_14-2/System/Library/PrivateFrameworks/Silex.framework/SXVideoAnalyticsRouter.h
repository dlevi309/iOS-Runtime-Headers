/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXAnalyticsReporting.h>

@class NSMutableDictionary, NSString;

@interface SXVideoAnalyticsRouter : NSObject <SXAnalyticsReporting> {

	BOOL _hasReroutedInitiatedPlaybackEvent;
	unsigned long long _currentPlaybackLocation;
	unsigned long long _initiatedPlaybackLocation;
	NSMutableDictionary* _reporters;

}

@property (nonatomic,readonly) unsigned long long initiatedPlaybackLocation;              //@synthesize initiatedPlaybackLocation=_initiatedPlaybackLocation - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * reporters;                           //@synthesize reporters=_reporters - In the implementation block
@property (assign,nonatomic) BOOL hasReroutedInitiatedPlaybackEvent;                      //@synthesize hasReroutedInitiatedPlaybackEvent=_hasReroutedInitiatedPlaybackEvent - In the implementation block
@property (assign,nonatomic) unsigned long long currentPlaybackLocation;                  //@synthesize currentPlaybackLocation=_currentPlaybackLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reportEvent:(id)arg1 ;
-(void)setAnalyticsReporter:(id)arg1 forPlaybackLocation:(unsigned long long)arg2 ;
-(NSMutableDictionary *)reporters;
-(id)analyticsReporterForEvent:(id)arg1 ;
-(unsigned long long)currentPlaybackLocation;
-(id)reporterForPlaybackLocation:(unsigned long long)arg1 ;
-(unsigned long long)initiatedPlaybackLocation;
-(BOOL)hasReroutedInitiatedPlaybackEvent;
-(void)setHasReroutedInitiatedPlaybackEvent:(BOOL)arg1 ;
-(id)initWithInitiatedPlaybackLocation:(unsigned long long)arg1 analyticsReporter:(id)arg2 ;
-(void)setCurrentPlaybackLocation:(unsigned long long)arg1 ;
@end

