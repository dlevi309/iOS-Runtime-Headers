/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKEmergencyCardTableItem.h>

@class HKEmergencyCardFooterCell, NSAttributedString;

@interface HKEmergencyCardFooterTableItem : HKEmergencyCardTableItem {

	HKEmergencyCardFooterCell* _cell;
	NSAttributedString* _attributedTitleForFooter;
	/*^block*/id _shouldInteractWithURLBlock;

}

@property (nonatomic,retain) NSAttributedString * attributedTitleForFooter;              //@synthesize attributedTitleForFooter=_attributedTitleForFooter - In the implementation block
@property (nonatomic,copy) id shouldInteractWithURLBlock;                                //@synthesize shouldInteractWithURLBlock=_shouldInteractWithURLBlock - In the implementation block
-(UIEdgeInsets)separatorInset;
-(id)_cell;
-(id)initInEditMode:(BOOL)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)setAttributedTitleForFooter:(NSAttributedString *)arg1 ;
-(void)setShouldInteractWithURLBlock:(id)arg1 ;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(NSAttributedString *)attributedTitleForFooter;
-(id)shouldInteractWithURLBlock;
@end

