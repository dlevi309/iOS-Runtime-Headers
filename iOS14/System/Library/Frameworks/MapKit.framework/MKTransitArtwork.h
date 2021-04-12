/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/GEOTransitArtworkDataSource.h>

@protocol GEOTransitShieldDataSource, GEOTransitIconDataSource, GEOTransitTextDataSource;
@class NSString;

@interface MKTransitArtwork : NSObject <GEOTransitArtworkDataSource> {

	NSString* _accessibilityText;
	BOOL _hasRoutingIncidentBadge;
	int _artworkSourceType;
	int _artworkUseType;
	id<GEOTransitShieldDataSource> _shieldDataSource;
	id<GEOTransitIconDataSource> _iconDataSource;
	id<GEOTransitShieldDataSource> _iconFallbackShieldDataSource;
	id<GEOTransitTextDataSource> _textDataSource;

}

@property (nonatomic,readonly) int artworkSourceType;                                                    //@synthesize artworkSourceType=_artworkSourceType - In the implementation block
@property (nonatomic,readonly) int artworkUseType;                                                       //@synthesize artworkUseType=_artworkUseType - In the implementation block
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> shieldDataSource;                          //@synthesize shieldDataSource=_shieldDataSource - In the implementation block
@property (nonatomic,readonly) id<GEOTransitIconDataSource> iconDataSource;                              //@synthesize iconDataSource=_iconDataSource - In the implementation block
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> iconFallbackShieldDataSource;              //@synthesize iconFallbackShieldDataSource=_iconFallbackShieldDataSource - In the implementation block
@property (nonatomic,readonly) id<GEOTransitTextDataSource> textDataSource;                              //@synthesize textDataSource=_textDataSource - In the implementation block
@property (nonatomic,readonly) BOOL hasRoutingIncidentBadge;                                             //@synthesize hasRoutingIncidentBadge=_hasRoutingIncidentBadge - In the implementation block
@property (nonatomic,readonly) NSString * accessibilityText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)artworkWithText:(id)arg1 ;
+(id)artworkWithShield:(id)arg1 accessibilityText:(id)arg2 ;
+(id)artworkWithIcon:(id)arg1 accessibilityText:(id)arg2 ;
-(id)initWithText:(id)arg1 ;
-(int)artworkSourceType;
-(int)artworkUseType;
-(id<GEOTransitShieldDataSource>)shieldDataSource;
-(id<GEOTransitIconDataSource>)iconDataSource;
-(id<GEOTransitShieldDataSource>)iconFallbackShieldDataSource;
-(id<GEOTransitTextDataSource>)textDataSource;
-(BOOL)hasRoutingIncidentBadge;
-(NSString *)accessibilityText;
-(id)initWithShield:(id)arg1 accessibilityText:(id)arg2 ;
-(id)initWithIcon:(id)arg1 accessibilityText:(id)arg2 ;
-(id)initWithIcon:(id)arg1 fallbackShield:(id)arg2 accessibilityText:(id)arg3 ;
@end

