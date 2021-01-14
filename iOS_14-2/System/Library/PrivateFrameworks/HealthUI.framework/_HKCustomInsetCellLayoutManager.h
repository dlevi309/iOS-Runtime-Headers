/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UITableViewCellLayoutManager.h>

@interface _HKCustomInsetCellLayoutManager : UITableViewCellLayoutManager {

	double _topInset;
	double _textLabelLeftInset;

}

@property (assign,nonatomic) double topInset;                        //@synthesize topInset=_topInset - In the implementation block
@property (assign,nonatomic) double textLabelLeftInset;              //@synthesize textLabelLeftInset=_textLabelLeftInset - In the implementation block
+(BOOL)requiresLegacyLayout;
-(CGRect)editingAccessoryStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(CGRect)editingAccessoryEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(CGRect)accessoryEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(CGRect)accessoryStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(double)topInset;
-(CGRect)editControlStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(CGRect)editControlEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(CGRect)contentRectForCell:(id)arg1 forState:(unsigned long long)arg2 ;
-(CGRect)contentStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(CGRect)contentStartingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(BOOL)arg2 ;
-(CGRect)contentEndingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(BOOL)arg2 ;
-(void)setTopInset:(double)arg1 ;
-(CGRect)contentEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(BOOL)arg3 ;
-(double)textLabelLeftInset;
-(void)setTextLabelLeftInset:(double)arg1 ;
@end

