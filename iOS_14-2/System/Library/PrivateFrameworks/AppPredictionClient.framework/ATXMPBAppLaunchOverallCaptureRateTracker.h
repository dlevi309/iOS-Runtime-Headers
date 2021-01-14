/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ATXMPBAppLaunchOverallCaptureRateTracker : PBCodable <NSCopying> {

	int _captureType;
	int _iconLocation;
	BOOL _appLibraryEnabled;
	BOOL _appPredictionPanelEnabled;
	BOOL _appPredictionPanelTodayEnabled;
	BOOL _spotlightEnabled;
	BOOL _suggestionsWidgetEnabled;
	BOOL _suggestionsWidgetTodayEnabled;
	SCD_Struct_AT10 _has;

}

@property (assign,nonatomic) BOOL hasCaptureType; 
@property (assign,nonatomic) int captureType;                                     //@synthesize captureType=_captureType - In the implementation block
@property (assign,nonatomic) BOOL hasIconLocation; 
@property (assign,nonatomic) int iconLocation;                                    //@synthesize iconLocation=_iconLocation - In the implementation block
@property (assign,nonatomic) BOOL hasSpotlightEnabled; 
@property (assign,nonatomic) BOOL spotlightEnabled;                               //@synthesize spotlightEnabled=_spotlightEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasAppLibraryEnabled; 
@property (assign,nonatomic) BOOL appLibraryEnabled;                              //@synthesize appLibraryEnabled=_appLibraryEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasAppPredictionPanelEnabled; 
@property (assign,nonatomic) BOOL appPredictionPanelEnabled;                      //@synthesize appPredictionPanelEnabled=_appPredictionPanelEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasAppPredictionPanelTodayEnabled; 
@property (assign,nonatomic) BOOL appPredictionPanelTodayEnabled;                 //@synthesize appPredictionPanelTodayEnabled=_appPredictionPanelTodayEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionsWidgetEnabled; 
@property (assign,nonatomic) BOOL suggestionsWidgetEnabled;                       //@synthesize suggestionsWidgetEnabled=_suggestionsWidgetEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionsWidgetTodayEnabled; 
@property (assign,nonatomic) BOOL suggestionsWidgetTodayEnabled;                  //@synthesize suggestionsWidgetTodayEnabled=_suggestionsWidgetTodayEnabled - In the implementation block
-(id)dictionaryRepresentation;
-(void)setIconLocation:(int)arg1 ;
-(int)iconLocation;
-(void)mergeFrom:(id)arg1 ;
-(void)setCaptureType:(int)arg1 ;
-(id)description;
-(int)captureType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSpotlightEnabled:(BOOL)arg1 ;
-(void)setAppLibraryEnabled:(BOOL)arg1 ;
-(void)setAppPredictionPanelTodayEnabled:(BOOL)arg1 ;
-(void)setAppPredictionPanelEnabled:(BOOL)arg1 ;
-(void)setSuggestionsWidgetEnabled:(BOOL)arg1 ;
-(void)setSuggestionsWidgetTodayEnabled:(BOOL)arg1 ;
-(BOOL)spotlightEnabled;
-(BOOL)appLibraryEnabled;
-(BOOL)appPredictionPanelEnabled;
-(BOOL)appPredictionPanelTodayEnabled;
-(BOOL)suggestionsWidgetEnabled;
-(BOOL)suggestionsWidgetTodayEnabled;
-(void)setHasCaptureType:(BOOL)arg1 ;
-(BOOL)hasCaptureType;
-(id)captureTypeAsString:(int)arg1 ;
-(int)StringAsCaptureType:(id)arg1 ;
-(void)setHasIconLocation:(BOOL)arg1 ;
-(BOOL)hasIconLocation;
-(id)iconLocationAsString:(int)arg1 ;
-(int)StringAsIconLocation:(id)arg1 ;
-(void)setHasSpotlightEnabled:(BOOL)arg1 ;
-(BOOL)hasSpotlightEnabled;
-(void)setHasAppLibraryEnabled:(BOOL)arg1 ;
-(BOOL)hasAppLibraryEnabled;
-(void)setHasAppPredictionPanelEnabled:(BOOL)arg1 ;
-(BOOL)hasAppPredictionPanelEnabled;
-(void)setHasAppPredictionPanelTodayEnabled:(BOOL)arg1 ;
-(BOOL)hasAppPredictionPanelTodayEnabled;
-(void)setHasSuggestionsWidgetEnabled:(BOOL)arg1 ;
-(BOOL)hasSuggestionsWidgetEnabled;
-(void)setHasSuggestionsWidgetTodayEnabled:(BOOL)arg1 ;
-(BOOL)hasSuggestionsWidgetTodayEnabled;
@end

