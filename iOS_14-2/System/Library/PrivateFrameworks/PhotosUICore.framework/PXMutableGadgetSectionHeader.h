/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString, PXGadgetSpec;


@protocol PXMutableGadgetSectionHeader
@property (assign,nonatomic) unsigned long long headerStyle; 
@property (nonatomic,copy) NSString * headerTitle; 
@property (assign,nonatomic) unsigned long long buttonType; 
@property (nonatomic,copy) NSString * customButtonTitle; 
@property (nonatomic,copy) id accessoryButtonPressed; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec; 
@property (assign,nonatomic) BOOL isFirstSection; 
@property (assign,nonatomic) BOOL shouldShowDividerOnFirstSection; 
@required
-(PXGadgetSpec *)gadgetSpec;
-(NSString *)headerTitle;
-(void)setIsFirstSection:(BOOL)arg1;
-(void)setGadgetSpec:(id)arg1;
-(void)setButtonType:(unsigned long long)arg1;
-(void)setAccessoryButtonPressed:(/*^block*/id)arg1;
-(void)setHeaderStyle:(unsigned long long)arg1;
-(void)setCustomButtonTitle:(id)arg1;
-(BOOL)isFirstSection;
-(id)accessoryButtonPressed;
-(void)setShouldShowDividerOnFirstSection:(BOOL)arg1;
-(BOOL)shouldShowDividerOnFirstSection;
-(void)setHeaderTitle:(id)arg1;
-(unsigned long long)headerStyle;
-(unsigned long long)buttonType;
-(NSString *)customButtonTitle;

@end

