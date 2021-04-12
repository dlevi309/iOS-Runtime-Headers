/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString, NSArray, PXLabeledValue;


@protocol PXSmartAlbumQuery <NSObject>
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,readonly) NSArray * conjunctionValues; 
@property (nonatomic,retain) PXLabeledValue * conjunctionValue; 
@property (nonatomic,retain) NSArray * conditions; 
@property (nonatomic,readonly) BOOL canPersistChanges; 
@property (nonatomic,readonly) NSString * statusString; 
@property (assign,nonatomic,__weak) id<PXSmartAlbumQueryDelegate> delegate; 
@required
-(NSArray *)conditions;
-(void)setConditions:(id)arg1;
-(id<PXSmartAlbumQueryDelegate>)delegate;
-(void)setTitle:(id)arg1;
-(void)persistChangesWithCompletion:(/*^block*/id)arg1;
-(void)setDelegate:(id)arg1;
-(NSString *)statusString;
-(id)addNewConditionAfterCondition:(id)arg1;
-(id)replaceCondition:(id)arg1 withConditionOfType:(long long)arg2;
-(void)removeCondition:(id)arg1;
-(NSArray *)conjunctionValues;
-(PXLabeledValue *)conjunctionValue;
-(void)setConjunctionValue:(id)arg1;
-(BOOL)canPersistChanges;
-(NSString *)title;

@end

