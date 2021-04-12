/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPPropertySet;

@interface MPModelStoreBrowseSectionBuilder : NSObject {

	SCD_Struct_MP15 _requestedBrowseSectionProperties;
	MPPropertySet* _requestedPropertySet;

}

@property (nonatomic,readonly) MPPropertySet * requestedPropertySet;                                             //@synthesize requestedPropertySet=_requestedPropertySet - In the implementation block
@property (nonatomic,readonly) MPPropertySet * requestedPropertySetExcludingInternalOnlyProperties; 
+(id)allSupportedInternalOnlyProperties;
+(id)allSupportedPropertiesIncludingInternalOnlyProperties:(BOOL)arg1 ;
-(id)modelObjectWithTitle:(id)arg1 loadAdditionalContentURL:(id)arg2 uniformContentItemType:(long long)arg3 isMemberOfChartSet:(BOOL)arg4 isBrick:(BOOL)arg5 displaysAsGridCellInCarPlay:(BOOL)arg6 previouslyRetrievedNestedResponse:(id)arg7 onlyContainsEditorialElements:(BOOL)arg8 featuredContentKind:(long long)arg9 modelObject:(id)arg10 ;
-(id)modelObjectWithTitle:(id)arg1 loadAdditionalContentURL:(id)arg2 uniformContentItemType:(long long)arg3 isMemberOfChartSet:(BOOL)arg4 isBrick:(BOOL)arg5 displaysAsGridCellInCarPlay:(BOOL)arg6 previouslyRetrievedNestedResponse:(id)arg7 onlyContainsEditorialElements:(BOOL)arg8 featuredContentKind:(long long)arg9 ;
-(id)modelObjectWithTitle:(id)arg1 loadAdditionalContentURL:(id)arg2 uniformContentItemType:(long long)arg3 isMemberOfChartSet:(BOOL)arg4 isBrick:(BOOL)arg5 previouslyRetrievedNestedResponse:(id)arg6 ;
-(id)initWithRequestedPropertySet:(id)arg1 ;
-(MPPropertySet *)requestedPropertySetExcludingInternalOnlyProperties;
-(MPPropertySet *)requestedPropertySet;
@end

