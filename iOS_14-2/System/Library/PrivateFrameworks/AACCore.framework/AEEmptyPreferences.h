/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
*/

#import <libobjc.A.dylib/AEPreferences.h>

@class NSString;

@interface AEEmptyPreferences : NSObject <AEPreferences> {

	BOOL createAssessmentFile;
	BOOL disableContinuity;
	BOOL disableSiri;
	BOOL enterSandbox;
	BOOL disableTrackpadLookup;
	BOOL presentShields;
	BOOL pauseMedia;
	BOOL restrictFrontmostApp;
	BOOL restrictContentCapture;
	BOOL scrubPasteboard;
	BOOL restrictNetworkAccess;
	BOOL stopAirPlayBeforehand;

}

@property (assign,getter=shouldEnterSandbox,nonatomic) BOOL enterSandbox; 
@property (assign,getter=shouldPresentShields,nonatomic) BOOL presentShields; 
@property (assign,getter=shouldCreateAssessmentFile,nonatomic) BOOL createAssessmentFile; 
@property (assign,getter=shouldDisableSiri,nonatomic) BOOL disableSiri; 
@property (assign,getter=shouldDisableContinuity,nonatomic) BOOL disableContinuity; 
@property (assign,getter=shouldScrubPasteboard,nonatomic) BOOL scrubPasteboard; 
@property (assign,getter=shouldRestrictNetworkAccess,nonatomic) BOOL restrictNetworkAccess; 
@property (assign,getter=shouldStopAirplayBeforehand,nonatomic) BOOL stopAirPlayBeforehand; 
@property (assign,getter=shouldRestrictFrontmostApp,nonatomic) BOOL restrictFrontmostApp; 
@property (assign,getter=shouldPauseMedia,nonatomic) BOOL pauseMedia; 
@property (assign,getter=shouldRestrictContentCapture,nonatomic) BOOL restrictContentCapture; 
@property (assign,getter=shouldDisableTrackpadLookup,nonatomic) BOOL disableTrackpadLookup; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEnterSandbox:(BOOL)arg1 ;
-(void)setDisableContinuity:(BOOL)arg1 ;
-(BOOL)shouldDisableSiri;
-(BOOL)shouldEnterSandbox;
-(BOOL)shouldPresentShields;
-(void)setPresentShields:(BOOL)arg1 ;
-(BOOL)shouldCreateAssessmentFile;
-(void)setCreateAssessmentFile:(BOOL)arg1 ;
-(void)setDisableSiri:(BOOL)arg1 ;
-(BOOL)shouldDisableContinuity;
-(BOOL)shouldScrubPasteboard;
-(void)setScrubPasteboard:(BOOL)arg1 ;
-(BOOL)shouldRestrictNetworkAccess;
-(void)setRestrictNetworkAccess:(BOOL)arg1 ;
-(BOOL)shouldStopAirplayBeforehand;
-(void)setStopAirPlayBeforehand:(BOOL)arg1 ;
-(BOOL)shouldRestrictFrontmostApp;
-(void)setRestrictFrontmostApp:(BOOL)arg1 ;
-(BOOL)shouldPauseMedia;
-(void)setPauseMedia:(BOOL)arg1 ;
-(BOOL)shouldRestrictContentCapture;
-(void)setRestrictContentCapture:(BOOL)arg1 ;
-(BOOL)shouldDisableTrackpadLookup;
-(void)setDisableTrackpadLookup:(BOOL)arg1 ;
@end

