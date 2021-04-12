/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIButtonBarLayoutMetricsData.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLayoutDimension, NSLayoutAnchor, NSLayoutYAxisAnchor, NSString;

@interface _UIButtonBarLayoutMetrics : NSObject <_UIButtonBarLayoutMetricsData, NSCopying> {

	BOOL _locked;
	BOOL _createsPopoverLayoutGuides;
	BOOL _allowsViewWrappers;
	NSLayoutDimension* _verticalSizeGuide;
	NSLayoutDimension* _minimumSpaceGuide;
	NSLayoutDimension* _flexibleSpaceGuide;
	NSLayoutYAxisAnchor* _popoverGuideTopAnchor;
	NSLayoutDimension* _groupSizeGuide;
	NSLayoutDimension* _groupSpacingGuide;

}

@property (nonatomic,retain) NSLayoutDimension * verticalSizeGuide;                    //@synthesize verticalSizeGuide=_verticalSizeGuide - In the implementation block
@property (nonatomic,retain) NSLayoutDimension * minimumSpaceGuide;                    //@synthesize minimumSpaceGuide=_minimumSpaceGuide - In the implementation block
@property (nonatomic,retain) NSLayoutDimension * flexibleSpaceGuide;                   //@synthesize flexibleSpaceGuide=_flexibleSpaceGuide - In the implementation block
@property (nonatomic,retain) NSLayoutYAxisAnchor * popoverGuideTopAnchor;              //@synthesize popoverGuideTopAnchor=_popoverGuideTopAnchor - In the implementation block
@property (nonatomic,retain) NSLayoutDimension * groupSizeGuide;                       //@synthesize groupSizeGuide=_groupSizeGuide - In the implementation block
@property (nonatomic,retain) NSLayoutDimension * groupSpacingGuide;                    //@synthesize groupSpacingGuide=_groupSpacingGuide - In the implementation block
@property (assign,nonatomic) BOOL createsPopoverLayoutGuides;                          //@synthesize createsPopoverLayoutGuides=_createsPopoverLayoutGuides - In the implementation block
@property (assign,nonatomic) BOOL allowsViewWrappers;                                  //@synthesize allowsViewWrappers=_allowsViewWrappers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCreatesPopoverLayoutGuides:(BOOL)arg1 ;
-(BOOL)createsPopoverLayoutGuides;
-(void)setAllowsViewWrappers:(BOOL)arg1 ;
-(BOOL)allowsViewWrappers;
-(void)setVerticalSizeGuide:(NSLayoutDimension *)arg1 ;
-(void)setMinimumSpaceGuide:(NSLayoutDimension *)arg1 ;
-(void)setFlexibleSpaceGuide:(NSLayoutDimension *)arg1 ;
-(void)setPopoverGuideTopAnchor:(NSLayoutYAxisAnchor *)arg1 ;
-(void)setGroupSpacingGuide:(NSLayoutDimension *)arg1 ;
-(void)setGroupSizeGuide:(NSLayoutDimension *)arg1 ;
-(id)_copyWithModifications:(/*^block*/id)arg1 ;
-(id)_upcastIfReadOnly;
-(NSLayoutDimension *)verticalSizeGuide;
-(NSLayoutDimension *)minimumSpaceGuide;
-(NSLayoutDimension *)flexibleSpaceGuide;
-(NSLayoutYAxisAnchor *)popoverGuideTopAnchor;
-(NSLayoutDimension *)groupSizeGuide;
-(NSLayoutDimension *)groupSpacingGuide;
@end

