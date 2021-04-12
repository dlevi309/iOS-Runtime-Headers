/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDefaults;
-(void)setAspectRatioLocked:(BOOL)arg1 ;
-(id)clickHyperlink;
-(id)orientedBounds;
-(void)setOrientedBounds:(id)arg1 ;
-(void)setClickHyperlink:(id)arg1 ;
-(void)setHoverHyperlink:(id)arg1 ;
-(void)setAltTitle:(id)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(id)hoverHyperlink;
-(void)removeUnnecessaryOverrides;
-(BOOL)hasOrientedBounds;
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

