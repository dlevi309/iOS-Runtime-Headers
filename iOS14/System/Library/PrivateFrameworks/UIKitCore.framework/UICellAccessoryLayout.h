/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UICellAccessoryManager;


@protocol UICellAccessoryLayout <NSObject>
@property (assign,nonatomic,__weak) UICellAccessoryManager * manager; 
@property (assign,nonatomic) double safeAreaInset; 
@property (assign,nonatomic) unsigned long long edge; 
@property (nonatomic,copy) id standardLayoutWidthProvider; 
@property (nonatomic,copy) id disclosureLayoutWidthProvider; 
@required
-(unsigned long long)edge;
-(void)setEdge:(unsigned long long)arg1;
-(double)safeAreaInset;
-(void)setStandardLayoutWidthProvider:(/*^block*/id)arg1;
-(id)standardLayoutWidthProvider;
-(void)setManager:(id)arg1;
-(CGRect*)endLayout;
-(void)prepareLayoutForAccessories:(id)arg1 previousAccessories:(id)arg2 configurationIdentifier:(id)arg3;
-(id)disclosureLayoutWidthProvider;
-(UICellAccessoryManager *)manager;
-(void)setSafeAreaInset:(double)arg1;
-(CGRect*)finalFrameForAccessory:(id)arg1;
-(double)initialAlphaForAccessory:(id)arg1;
-(void)setDisclosureLayoutWidthProvider:(/*^block*/id)arg1;
-(CGRect*)initialFrameForAccessory:(id)arg1;
-(double)finalAlphaForAccessory:(id)arg1;

@end

