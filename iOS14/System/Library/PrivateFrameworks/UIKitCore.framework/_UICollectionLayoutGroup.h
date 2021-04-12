/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutItem.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@class NSArray, _UICollectionLayoutSpacing;

@interface _UICollectionLayoutGroup : _UICollectionLayoutItem <NSCopying, _UICollectionLayoutAPIRespresenting> {

	unsigned long long _layoutAxis;
	BOOL _isCustomGroup;
	NSArray* _subitems;
	long long _count;
	NSArray* _supplementaryItems;
	_UICollectionLayoutSpacing* _interItemSpacing;
	long long _groupOptions;
	/*^block*/id _subitemsProvider;
	/*^block*/id _frameProvider;
	/*^block*/id _customGroupItemProvider;
	/*^block*/id _visualFormatProvider;
	NSArray* _visualFormats;

}

@property (nonatomic,copy) NSArray * supplementaryItems; 
@property (nonatomic,copy) _UICollectionLayoutSpacing * interItemSpacing; 
@property (nonatomic,readonly) BOOL isHorizontalGroup; 
@property (nonatomic,readonly) BOOL isVerticalGroup; 
@property (nonatomic,readonly) BOOL isCustomGroup; 
@property (assign,nonatomic) long long groupOptions;                                   //@synthesize groupOptions=_groupOptions - In the implementation block
+(id)horizontalGroupWithSize:(id)arg1 subitemsProvider:(/*^block*/id)arg2 ;
+(id)groupWithLayoutAxis:(unsigned long long)arg1 size:(id)arg2 subitems:(id)arg3 count:(long long)arg4 ;
+(id)horizontalGroupWithSize:(id)arg1 subitem:(id)arg2 count:(long long)arg3 ;
+(id)horizontalGroupWithSize:(id)arg1 subitems:(id)arg2 ;
+(id)verticalGroupWithSize:(id)arg1 subitem:(id)arg2 count:(long long)arg3 ;
+(id)verticalGroupWithSize:(id)arg1 subitems:(id)arg2 ;
+(id)customGroupWithSize:(id)arg1 frameProvider:(/*^block*/id)arg2 ;
+(id)verticalGroupWithSize:(id)arg1 subitemsProvider:(/*^block*/id)arg2 ;
+(id)layoutGroupWithSize:(id)arg1 visualFormats:(id)arg2 itemProvider:(/*^block*/id)arg3 ;
-(id)visualDescription;
-(_UICollectionLayoutSpacing *)interItemSpacing;
-(id)initWithlayoutSize:(id)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 layoutAxis:(unsigned long long)arg3 isCustomGroup:(BOOL)arg4 subitems:(id)arg5 count:(long long)arg6 supplementaryItems:(id)arg7 interItemSpacing:(id)arg8 groupOptions:(long long)arg9 subitemsProvider:(/*^block*/id)arg10 frameProvider:(/*^block*/id)arg11 customGroupItemProvider:(/*^block*/id)arg12 visualFormats:(id)arg13 visualFormatProvider:(/*^block*/id)arg14 ;
-(void)setInterItemSpacing:(_UICollectionLayoutSpacing *)arg1 ;
-(NSArray *)supplementaryItems;
-(BOOL)isVerticalGroup;
-(BOOL)isCustomGroup;
-(void)setGroupOptions:(long long)arg1 ;
-(void)setSupplementaryItems:(NSArray *)arg1 ;
-(id)_apiRepresentation;
-(BOOL)isHorizontalGroup;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)groupOptions;
@end

