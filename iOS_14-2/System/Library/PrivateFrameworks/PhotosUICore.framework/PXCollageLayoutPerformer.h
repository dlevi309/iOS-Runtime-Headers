/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXBaseLayoutPerformer.h>
#import <libobjc.A.dylib/PXLayoutPerformer.h>

@class PXLeafLayoutPerformer, PXSplitLayoutPerformer, NSMutableArray, PXLayoutPerformerOutput, NSArray;

@interface PXCollageLayoutPerformer : PXBaseLayoutPerformer <PXLayoutPerformer> {

	BOOL _portraitBias;
	double _outerLayoutRatio;
	double _interItemSpacing;
	long long _numberOfVisibleItems;
	PXLeafLayoutPerformer* _singleItemPerformer;
	PXSplitLayoutPerformer* _twoItemPerformer;
	PXSplitLayoutPerformer* _threeItemPerformer;
	PXSplitLayoutPerformer* _threeItemNestedPerformer;
	NSMutableArray* _mutableChildren;

}

@property (nonatomic,retain) PXLeafLayoutPerformer * singleItemPerformer;                    //@synthesize singleItemPerformer=_singleItemPerformer - In the implementation block
@property (nonatomic,retain) PXSplitLayoutPerformer * twoItemPerformer;                      //@synthesize twoItemPerformer=_twoItemPerformer - In the implementation block
@property (nonatomic,retain) PXSplitLayoutPerformer * threeItemPerformer;                    //@synthesize threeItemPerformer=_threeItemPerformer - In the implementation block
@property (nonatomic,retain) PXSplitLayoutPerformer * threeItemNestedPerformer;              //@synthesize threeItemNestedPerformer=_threeItemNestedPerformer - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableChildren;                               //@synthesize mutableChildren=_mutableChildren - In the implementation block
@property (assign,nonatomic) double outerLayoutRatio;                                        //@synthesize outerLayoutRatio=_outerLayoutRatio - In the implementation block
@property (assign,nonatomic) double interItemSpacing;                                        //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (assign,nonatomic) BOOL portraitBias;                                              //@synthesize portraitBias=_portraitBias - In the implementation block
@property (assign,nonatomic) long long numberOfVisibleItems;                                 //@synthesize numberOfVisibleItems=_numberOfVisibleItems - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX31 layoutInput; 
@property (nonatomic,retain) PXLayoutPerformerOutput * layoutOutput; 
@property (nonatomic,readonly) NSArray * children; 
+(CGSize)performLayoutWithLayoutInput:(SCD_Struct_PX31)arg1 layoutOutput:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSArray *)children;
-(double)interItemSpacing;
-(void)setInterItemSpacing:(double)arg1 ;
-(id)init;
-(void)prepareForReuse;
-(long long)numberOfVisibleItems;
-(CGSize)performLayout;
-(void)setNumberOfVisibleItems:(long long)arg1 ;
-(void)setOuterLayoutRatio:(double)arg1 ;
-(void)setPortraitBias:(BOOL)arg1 ;
-(double)outerLayoutRatio;
-(BOOL)portraitBias;
-(PXLeafLayoutPerformer *)singleItemPerformer;
-(void)setSingleItemPerformer:(PXLeafLayoutPerformer *)arg1 ;
-(PXSplitLayoutPerformer *)twoItemPerformer;
-(void)setTwoItemPerformer:(PXSplitLayoutPerformer *)arg1 ;
-(PXSplitLayoutPerformer *)threeItemPerformer;
-(void)setThreeItemPerformer:(PXSplitLayoutPerformer *)arg1 ;
-(PXSplitLayoutPerformer *)threeItemNestedPerformer;
-(void)setThreeItemNestedPerformer:(PXSplitLayoutPerformer *)arg1 ;
-(NSMutableArray *)mutableChildren;
-(void)setMutableChildren:(NSMutableArray *)arg1 ;
@end

