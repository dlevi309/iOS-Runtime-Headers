/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString;


@protocol PXMutableHorizontalCollectionGadget <NSObject>
@property (nonatomic,copy) NSString * collectionTitle; 
@property (assign,nonatomic) unsigned long long collectionAccessoryButtonType; 
@property (nonatomic,copy) NSString * collectionAccessoryButtonTitle; 
@property (assign,nonatomic) double collectionHeight; 
@required
-(unsigned long long)collectionAccessoryButtonType;
-(void)setCollectionAccessoryButtonType:(unsigned long long)arg1;
-(NSString *)collectionAccessoryButtonTitle;
-(void)setCollectionAccessoryButtonTitle:(id)arg1;
-(NSString *)collectionTitle;
-(void)setCollectionHeight:(double)arg1;
-(double)collectionHeight;
-(void)setCollectionTitle:(id)arg1;

@end

