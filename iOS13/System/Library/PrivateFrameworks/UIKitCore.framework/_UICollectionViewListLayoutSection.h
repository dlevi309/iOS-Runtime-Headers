/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCollectionLayoutSection.h>
#import <UIKitCore/_UICollectionLayoutSectionCallback.h>

@protocol NSCollectionLayoutEnvironment_Private;
@class _UICollectionViewListLayoutSectionConfiguration, NSString;

@interface _UICollectionViewListLayoutSection : NSCollectionLayoutSection <_UICollectionLayoutSectionCallback> {

	_UICollectionViewListLayoutSectionConfiguration* _configuration;
	id<NSCollectionLayoutEnvironment_Private> _layoutEnvironment;

}

@property (getter=_layoutEnvironment,nonatomic,readonly) id<NSCollectionLayoutEnvironment_Private> layoutEnvironment;              //@synthesize layoutEnvironment=_layoutEnvironment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_callback;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_enrichLayoutAttributes:(id)arg1 ;
-(id)_layoutEnvironment;
-(id)initWithConfiguration:(id)arg1 layoutEnvironment:(id)arg2 ;
-(BOOL)__shouldDrawSeparatorAtTop:(BOOL)arg1 ofSection:(long long)arg2 ;
-(BOOL)__insetTopAndBottomSeparator;
-(BOOL)_shouldHideSeparatorAtIndexPath:(id)arg1 ;
-(BOOL)_requiresFullLengthSeparatorAtIndexPath:(id)arg1 ;
@end

