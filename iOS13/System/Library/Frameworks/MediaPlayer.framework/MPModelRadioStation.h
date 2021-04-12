/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString, NSArray, NSURL, MPRadioStationEvent;

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
@property (nonatomic,readonly) MPRadioStationEvent * currentStationEvent; 
@property (nonatomic,readonly) MPRadioStationEvent * upcomingStationEvent; 
@property (nonatomic,readonly) long long providerID; 
+(id)__artworkCatalogBlock_KEY;
+(id)classesForSecureCoding;
+(id)__beats1_KEY;
+(id)__live_KEY;
+(id)__name_KEY;
+(id)__editorNotes_KEY;
+(id)__shortEditorNotes_KEY;
+(id)__hasExplicitContent_KEY;
+(id)__stationEvents_KEY;
+(id)__stationGlyphBlock_KEY;
+(id)__allowsItemLiking_KEY;
+(id)__type_KEY;
+(id)__subtype_KEY;
+(id)__attributionLabel_KEY;
+(id)__providerName_KEY;
+(id)__subscriptionRequired_KEY;
+(id)__providerUniversalLink_KEY;
+(id)__providerBundleIdentifier_KEY;
+(id)__providerID_KEY;
-(id)humanDescription;
-(id)artworkCatalog;
-(id)contentItemCollectionInfo;
-(id)stationGlyph;
-(MPRadioStationEvent *)currentStationEvent;
-(MPRadioStationEvent *)upcomingStationEvent;
@end

