/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HKDisplayTypeContextViewDelegate.h>

@protocol HKDisplayTypeContextTableViewCellDelegate;
@class HKDisplayTypeContextView, NSArray, NSString;

@interface HKDisplayTypeContextTableViewCell : UITableViewCell <HKDisplayTypeContextViewDelegate> {

	HKDisplayTypeContextView* _contextView;
	NSArray* _displayTypeContextItems;
	id<HKDisplayTypeContextTableViewCellDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * displayTypeContextItems;                                            //@synthesize displayTypeContextItems=_displayTypeContextItems - In the implementation block
@property (assign,nonatomic,__weak) id<HKDisplayTypeContextTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(id<HKDisplayTypeContextTableViewCellDelegate>)delegate;
-(void)setupView;
-(void)setDelegate:(id<HKDisplayTypeContextTableViewCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)contextView:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(void)contextView:(id)arg1 didDeselectItemAtIndex:(long long)arg2 ;
-(void)contextView:(id)arg1 didTapOnInfoButtonAtIndex:(long long)arg2 ;
-(void)setDisplayTypeContextItems:(NSArray *)arg1 ;
-(void)selectItemAtIndex:(long long)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 ;
-(NSArray *)displayTypeContextItems;
@end

