/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADProperties.h>

@class OADOrientedBounds, OADHyperlink, NSString;

@interface OADDrawableProperties : OADProperties {

	OADOrientedBounds* mOrientedBounds;
	OADHyperlink* mClickHyperlink;
	OADHyperlink* mHoverHyperlink;
	NSString* mTitle;
	NSString* mDescription;
	unsigned mHasAspectRatioLocked : 1;
	unsigned mAspectRatioLocked : 1;
	unsigned mHasWrdInline : 1;
	unsigned mWrdInline : 1;

}
-(id)description;
-(unsigned long long)hash;
-(id)initWithDefaults;
-(BOOL)isEqual:(id)arg1 ;
-(id)orientedBounds;
-(id)clickHyperlink;
-(void)setOrientedBounds:(id)arg1 ;
-(void)setClickHyperlink:(id)arg1 ;
-(void)setHoverHyperlink:(id)arg1 ;
-(void)setAltTitle:(id)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(id)hoverHyperlink;
-(void)removeUnnecessaryOverrides;
-(BOOL)hasOrientedBounds;
-(void)setAspectRatioLocked:(BOOL)arg1 ;
-(void)setWrdInline:(BOOL)arg1 ;
-(BOOL)hasClickHyperlink;
-(BOOL)hasHoverHyperlink;
-(BOOL)hasAltTitle;
-(id)altTitle;
-(BOOL)isAspectRatioLocked;
-(BOOL)isWrdInline;
-(BOOL)hasAspectRatioLocked;
-(BOOL)hasWrdInline;
-(id)orientedBoundsForCharts;
-(id)altDescription;
-(void)setAltDescription:(id)arg1 ;
-(BOOL)hasAltDescription;
@end

