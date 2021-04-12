/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableArray, NSArray;

@interface PXSectionedLayoutContent : NSObject {

	NSMutableArray* _sections;
	long long _axis;
	CGSize _internalContentSize;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) long long axis;                          //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) CGSize internalContentSize;              //@synthesize internalContentSize=_internalContentSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsets;               //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sections; 
@property (nonatomic,readonly) CGSize contentSize; 
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(void)setAxis:(long long)arg1 ;
-(long long)axis;
-(void)removeSection:(id)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(id)init;
-(CGSize)contentSize;
-(NSArray *)sections;
-(void)insertSection:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeSections:(id)arg1 ;
-(id)initWithAxis:(long long)arg1 insets:(UIEdgeInsets)arg2 ;
-(void)removeAllSections;
-(void)exchangeSectionAtIndex:(unsigned long long)arg1 withSectionAtIndex:(unsigned long long)arg2 ;
-(void)_addSection:(id)arg1 ;
-(void)_insertSection:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_exchangeSectionAtIndex:(unsigned long long)arg1 withSectionAtIndex:(unsigned long long)arg2 ;
-(void)_adjustSectionsFromIndex:(long long)arg1 ;
-(CGSize)internalContentSize;
-(void)setInternalContentSize:(CGSize)arg1 ;
-(void)_removeSection:(id)arg1 ;
-(id)description;
-(void)updateSections:(id)arg1 ;
-(void)addSection:(id)arg1 ;
@end

