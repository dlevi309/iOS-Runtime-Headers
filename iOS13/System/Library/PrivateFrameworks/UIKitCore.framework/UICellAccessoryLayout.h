/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UICellAccessoryManager;


@protocol UICellAccessoryLayout <NSObject>
@property (assign,nonatomic,__weak) UICellAccessoryManager * manager; 
@property (assign,nonatomic) double safeAreaInset; 
@property (assign,nonatomic) unsigned long long edge; 
@property (assign,nonatomic) double minimumCompressionLayoutWidth; 
@required
-(UICellAccessoryManager *)manager;
-(void)setManager:(id)arg1;
-(void)setMinimumCompressionLayoutWidth:(double)arg1;
-(void)setEdge:(unsigned long long)arg1;
-(void)setSafeAreaInset:(double)arg1;
-(double)minimumCompressionLayoutWidth;
-(void)prepareLayoutForAccessories:(id)arg1 previousAccessories:(id)arg2 configurationIdentifier:(id)arg3;
-(CGRect*)initialFrameForAccessory:(id)arg1;
-(double)initialAlphaForAccessory:(id)arg1;
-(CGRect*)finalFrameForAccessory:(id)arg1;
-(double)finalAlphaForAccessory:(id)arg1;
-(CGRect*)endLayout;
-(double)safeAreaInset;
-(unsigned long long)edge;

@end

