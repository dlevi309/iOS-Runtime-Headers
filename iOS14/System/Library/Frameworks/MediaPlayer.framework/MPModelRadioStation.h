/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString, NSArray, NSURL, NSDate, MPRadioStationEvent;

@interface MPModelRadioStation : MPModelObject

@property (assign,getter=isBeats1,nonatomic) BOOL beats1; 
@property (assign,getter=isLive,nonatomic) BOOL live; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * editorNotes; 
@property (nonatomic,copy) NSString * shortEditorNotes; 
@property (assign,nonatomic) BOOL hasExplicitContent; 
@property (nonatomic,copy) NSArray * stationEvents; 
@property (nonatomic,copy) id artworkCatalogBlock; 
@property (nonatomic,copy) id stationGlyphBlock; 
@property (assign,nonatomic) BOOL allowsItemLiking; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long subtype; 
@property (nonatomic,copy) NSString * attributionLabel; 
@property (nonatomic,copy) NSString * providerName; 
@property (assign,getter=isSubscriptionRequired,nonatomic) BOOL subscriptionRequired; 
@property (nonatomic,copy) NSURL * providerUniversalLink; 
@property (nonatomic,copy) NSString * providerBundleIdentifier; 
@property (nonatomic,copy) NSDate * startingAirDate; 
@property (nonatomic,copy) NSDate * endingAirDate; 
@property (nonatomic,readonly) MPRadioStationEvent * currentStationEvent; 
@property (nonatomic,readonly) MPRadioStationEvent * upcomingStationEvent; 
@property (nonatomic,readonly) long long providerID; 
+(id)__editorNotes_KEY;
+(id)__live_KEY;
+(id)__type_KEY;
+(id)__stationGlyphBlock_KEY;
+(id)__allowsItemLiking_KEY;
+(id)__subscriptionRequired_KEY;
+(id)__providerName_KEY;
+(id)__stationEvents_KEY;
+(id)__endingAirDate_KEY;
+(id)__subtype_KEY;
+(id)__providerBundleIdentifier_KEY;
+(id)__startingAirDate_KEY;
+(id)classesForSecureCoding;
+(id)__providerUniversalLink_KEY;
+(id)__beats1_KEY;
+(id)__providerID_KEY;
+(id)__shortEditorNotes_KEY;
+(id)__hasExplicitContent_KEY;
+(id)__artworkCatalogBlock_KEY;
+(id)__name_KEY;
+(id)__attributionLabel_KEY;
-(id)contentItemCollectionInfo;
-(id)artworkCatalog;
-(id)stationGlyph;
-(MPRadioStationEvent *)currentStationEvent;
-(MPRadioStationEvent *)upcomingStationEvent;
-(id)humanDescription;
@end

