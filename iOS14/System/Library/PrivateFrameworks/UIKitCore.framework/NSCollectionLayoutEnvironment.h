/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)set_dataSourceSnapshot:(id<_UIDataSourceSnapshot>)arg1 ;
-(id)initWithContainer:(id)arg1 traitCollection:(id)arg2 dataSourceSnapshot:(id)arg3 ;
-(void)setContainer:(id<NSCollectionLayoutContainer>)arg1 ;
-(id<NSCollectionLayoutContainer>)container;
-(id<_UIDataSourceSnapshot>)_dataSourceSnapshot;
@end

