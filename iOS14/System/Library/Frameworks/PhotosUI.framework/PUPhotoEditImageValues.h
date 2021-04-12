/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSDictionary;

@interface PUPhotoEditImageValues : NSObject {

	BOOL _complete;
	NSDictionary* _smartToneStatistics;
	NSDictionary* _primarySmartToneStatistics;
	NSDictionary* _overcaptureSmartToneStatistics;
	NSDictionary* _smartColorStatistics;
	double _smartToneAutoSuggestion;
	double _smartColorAutoSuggestion;
	NSDictionary* _autoCropValues;
	NSDictionary* _autoPerspectiveValues;
	NSDictionary* _portraitValues;
	NSDictionary* _apertureValues;

}

@property (copy) NSDictionary * smartToneStatistics;                         //@synthesize smartToneStatistics=_smartToneStatistics - In the implementation block
@property (copy) NSDictionary * primarySmartToneStatistics;                  //@synthesize primarySmartToneStatistics=_primarySmartToneStatistics - In the implementation block
@property (copy) NSDictionary * overcaptureSmartToneStatistics;              //@synthesize overcaptureSmartToneStatistics=_overcaptureSmartToneStatistics - In the implementation block
@property (copy) NSDictionary * smartColorStatistics;                        //@synthesize smartColorStatistics=_smartColorStatistics - In the implementation block
@property (assign) double smartToneAutoSuggestion;                           //@synthesize smartToneAutoSuggestion=_smartToneAutoSuggestion - In the implementation block
@property (assign) double smartColorAutoSuggestion;                          //@synthesize smartColorAutoSuggestion=_smartColorAutoSuggestion - In the implementation block
@property (copy) NSDictionary * autoCropValues;                              //@synthesize autoCropValues=_autoCropValues - In the implementation block
@property (copy) NSDictionary * autoPerspectiveValues;                       //@synthesize autoPerspectiveValues=_autoPerspectiveValues - In the implementation block
@property (copy) NSDictionary * portraitValues;                              //@synthesize portraitValues=_portraitValues - In the implementation block
@property (copy) NSDictionary * apertureValues;                              //@synthesize apertureValues=_apertureValues - In the implementation block
@property (getter=isComplete) BOOL complete;                                 //@synthesize complete=_complete - In the implementation block
-(BOOL)isComplete;
-(NSDictionary *)smartToneStatistics;
-(NSDictionary *)smartColorStatistics;
-(void)setComplete:(BOOL)arg1 ;
-(void)setSmartToneStatistics:(NSDictionary *)arg1 ;
-(NSDictionary *)primarySmartToneStatistics;
-(void)setPrimarySmartToneStatistics:(NSDictionary *)arg1 ;
-(NSDictionary *)overcaptureSmartToneStatistics;
-(void)setOvercaptureSmartToneStatistics:(NSDictionary *)arg1 ;
-(void)setSmartColorStatistics:(NSDictionary *)arg1 ;
-(double)smartToneAutoSuggestion;
-(void)setSmartToneAutoSuggestion:(double)arg1 ;
-(double)smartColorAutoSuggestion;
-(void)setSmartColorAutoSuggestion:(double)arg1 ;
-(NSDictionary *)autoCropValues;
-(void)setAutoCropValues:(NSDictionary *)arg1 ;
-(NSDictionary *)autoPerspectiveValues;
-(void)setAutoPerspectiveValues:(NSDictionary *)arg1 ;
-(NSDictionary *)portraitValues;
-(void)setPortraitValues:(NSDictionary *)arg1 ;
-(NSDictionary *)apertureValues;
-(void)setApertureValues:(NSDictionary *)arg1 ;
@end

