/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSHashTable, NSString;

@interface _UIAccessibilityLimits : NSObject {

	NSHashTable* _associatedViews;
	NSString* _minimumContentSizeCategory;
	NSString* _maximumContentSizeCategory;

}

@property (nonatomic,copy) NSString * minimumContentSizeCategory;              //@synthesize minimumContentSizeCategory=_minimumContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * maximumContentSizeCategory;              //@synthesize maximumContentSizeCategory=_maximumContentSizeCategory - In the implementation block
-(NSString *)minimumContentSizeCategory;
-(void)_associateView:(id)arg1 ;
-(void)_notifyAllAssociatedViews;
-(NSString *)maximumContentSizeCategory;
-(id)_limitedTraitCollection:(id)arg1 ;
-(void)_dissociateView:(id)arg1 ;
-(void)setMaximumContentSizeCategory:(NSString *)arg1 ;
-(void)setMinimumContentSizeCategory:(NSString *)arg1 ;
@end

