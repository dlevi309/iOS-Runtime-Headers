/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKRatingStringProvider.h>

@class NSString;

@interface MKFirstPartyRatingStringBuilder : NSObject <MKRatingStringProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)thumbRecommendStringWithMapItem:(id)arg1 font:(id)arg2 includeGlyph:(BOOL)arg3 ;
+(id)percentageStringForMapItem:(id)arg1 showNumberOfRatings:(BOOL)arg2 textColor:(id)arg3 font:(id)arg4 theme:(id)arg5 ;
+(id)thumbRecommendStringWithMapItem:(id)arg1 font:(id)arg2 color:(id)arg3 includeGlyph:(BOOL)arg4 ;
+(id)ratingSymbolName;
+(id)_colorForPercentage:(double)arg1 ;
+(id)ratingPercentageAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 theme:(id)arg4 ;
+(id)ratingSummaryAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 theme:(id)arg4 ;
+(id)userRecommendedRatingSummaryAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 theme:(id)arg4 ;
+(id)ratingColorForMapItem:(id)arg1 ;
+(id)carPlayHeaderStringForMapItem:(id)arg1 titleAttributes:(id)arg2 providerAttributes:(id)arg3 ;
+(id)userRecommendationStringWithFont:(id)arg1 ratingState:(long long)arg2 numberOfPhotosAdded:(unsigned long long)arg3 ;
+(id)ratingAndReviewSummaryAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 theme:(id)arg4 ;
@end

