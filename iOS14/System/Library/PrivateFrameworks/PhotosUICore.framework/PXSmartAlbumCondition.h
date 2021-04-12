/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXSmartAlbumEditingContext, PXSmartAlbumConditionDelegate;
@class NSArray, PLSingleQuery, PXLabeledValue;

@interface PXSmartAlbumCondition : NSObject {

	NSArray* _comparatorValues;
	long long _conditionType;
	id<PXSmartAlbumEditingContext> _editingContext;
	PLSingleQuery* _singleQuery;
	id<PXSmartAlbumConditionDelegate> _delegate;

}

@property (nonatomic,readonly) long long conditionType;                                      //@synthesize conditionType=_conditionType - In the implementation block
@property (nonatomic,readonly) id<PXSmartAlbumEditingContext> editingContext;                //@synthesize editingContext=_editingContext - In the implementation block
@property (nonatomic,readonly) PLSingleQuery * singleQuery;                                  //@synthesize singleQuery=_singleQuery - In the implementation block
@property (assign,nonatomic,__weak) id<PXSmartAlbumConditionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * comparatorValues; 
@property (nonatomic,retain) PXLabeledValue * comparatorValue; 
@property (nonatomic,readonly) long long comparatorParameterType; 
+(id)defaultSingleQueryForEditingContext:(id)arg1 ;
+(id)conditionWithConditionType:(long long)arg1 editingContext:(id)arg2 ;
+(id)_conditionWithSingleQuery:(id)arg1 editingContext:(id)arg2 ;
+(id)conditionsForQuery:(id)arg1 editingContext:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(id<PXSmartAlbumConditionDelegate>)delegate;
-(long long)conditionType;
-(void)setDelegate:(id<PXSmartAlbumConditionDelegate>)arg1 ;
-(id)_initWithConditionType:(long long)arg1 singleQuery:(id)arg2 editingContext:(id)arg3 ;
-(NSArray *)comparatorValues;
-(PXLabeledValue *)comparatorValue;
-(long long)comparatorParameterType;
-(int)_comparatorType;
-(id<PXSmartAlbumEditingContext>)editingContext;
-(PLSingleQuery *)singleQuery;
-(void)setComparatorValue:(PXLabeledValue *)arg1 ;
-(long long)comparatorMode;
@end

