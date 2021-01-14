/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

@class UIFont;


@protocol CNAtomViewResembling <NSObject>
@property (assign,nonatomic) BOOL isPrimaryAddressAtom; 
@property (assign,nonatomic) BOOL hidesVIPIndicator; 
@property (assign,nonatomic) BOOL separatorHidden; 
@property (assign,nonatomic) BOOL separatorIsLeftAligned; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) int separatorStyle; 
@property (assign,nonatomic) unsigned long long presentationOptions; 
@property (nonatomic,readonly) CGPoint baselinePoint; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
@property (nonatomic,retain) UIFont * titleFont; 
@required
-(void)setTitleFont:(id)arg1;
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
-(UIEdgeInsets)edgeInsets;
-(double)scale;
-(UIFont *)titleFont;
-(unsigned long long)presentationOptions;
-(void)setPresentationOptions:(unsigned long long)arg1;
-(CGPoint)baselinePoint;
-(void)setScale:(double)arg1;
-(BOOL)isPrimaryAddressAtom;
-(BOOL)separatorHidden;
-(void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2;
-(void)setIsPrimaryAddressAtom:(BOOL)arg1;
-(BOOL)hidesVIPIndicator;
-(void)setHidesVIPIndicator:(BOOL)arg1;
-(BOOL)separatorIsLeftAligned;
-(void)setSeparatorIsLeftAligned:(BOOL)arg1;
-(void)setSeparatorHidden:(BOOL)arg1;

@end

