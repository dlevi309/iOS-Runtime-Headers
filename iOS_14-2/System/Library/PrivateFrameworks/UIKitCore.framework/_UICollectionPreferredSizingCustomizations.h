/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UICollectionPreferredSizingCustomizations : NSObject {

	unordered_map<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, _UICollectionAuxillaryCustomization> > >* _kindToCustomizationMap;
	unsigned long long _selectionGrouping;

}

@property (assign,nonatomic) unsigned long long selectionGrouping;              //@synthesize selectionGrouping=_selectionGrouping - In the implementation block
-(id)description;
-(NSDirectionalEdgeInsets)insetsForElementKind:(id)arg1 customized:(out BOOL*)arg2 ;
-(unsigned long long)hash;
-(void)setInsets:(NSDirectionalEdgeInsets)arg1 forElementKind:(id)arg2 ;
-(void)setHidden:(BOOL)arg1 forElementKind:(id)arg2 ;
-(void)setSelectionGrouping:(unsigned long long)arg1 ;
-(unsigned long long)selectionGrouping;
-(BOOL)elementKindIsHidden:(id)arg1 customized:(out BOOL*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

