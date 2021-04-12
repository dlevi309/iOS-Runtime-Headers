/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSCollectionLayoutEnvironment_Private.h>

@protocol _UIDataSourceSnapshot, NSCollectionLayoutContainer;
@class UITraitCollection, NSString;

@interface NSCollectionLayoutEnvironment : NSObject <NSCollectionLayoutEnvironment_Private> {

	id<_UIDataSourceSnapshot> __dataSourceSnapshot;
	id<NSCollectionLayoutContainer> _container;
	UITraitCollection* _traitCollection;

}

@property (nonatomic,retain) id<NSCollectionLayoutContainer> container;                  //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                        //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,retain) id<_UIDataSourceSnapshot> _dataSourceSnapshot;              //@synthesize _dataSourceSnapshot=__dataSourceSnapshot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NSCollectionLayoutContainer>)container;
-(void)setContainer:(id<NSCollectionLayoutContainer>)arg1 ;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(id)initWithContainer:(id)arg1 traitCollection:(id)arg2 dataSourceSnapshot:(id)arg3 ;
-(id<_UIDataSourceSnapshot>)_dataSourceSnapshot;
-(void)set_dataSourceSnapshot:(id<_UIDataSourceSnapshot>)arg1 ;
@end

