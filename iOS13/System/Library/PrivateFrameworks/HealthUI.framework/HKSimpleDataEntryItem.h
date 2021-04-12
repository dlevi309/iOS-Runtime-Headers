/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKSimpleDataEntryItemDelegate, HKSimpleDataEntryItemToolbarDelegate;
@interface HKSimpleDataEntryItem : NSObject {

	id<HKSimpleDataEntryItemDelegate> _delegate;
	id<HKSimpleDataEntryItemToolbarDelegate> _toolbarDelegate;
	unsigned long long _placeholderType;

}

@property (assign,nonatomic,__weak) id<HKSimpleDataEntryItemDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<HKSimpleDataEntryItemToolbarDelegate> toolbarDelegate;              //@synthesize toolbarDelegate=_toolbarDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long placeholderType;                                           //@synthesize placeholderType=_placeholderType - In the implementation block
-(void)beginEditing;
-(id<HKSimpleDataEntryItemDelegate>)delegate;
-(void)setDelegate:(id<HKSimpleDataEntryItemDelegate>)arg1 ;
-(id)cell;
-(void)localeDidChange:(id)arg1 ;
-(unsigned long long)placeholderType;
-(void)setPlaceholderType:(unsigned long long)arg1 ;
-(id)formattedKeyAndValue;
-(void)setToolbarDelegate:(id<HKSimpleDataEntryItemToolbarDelegate>)arg1 ;
-(id)accessoryToolbar;
-(void)updateCellDisplay;
-(id<HKSimpleDataEntryItemToolbarDelegate>)toolbarDelegate;
-(void)toolbarPrevButtonPressed:(id)arg1 ;
-(void)toolbarNextButtonPressed:(id)arg1 ;
-(void)toolbarDoneButtonPressed:(id)arg1 ;
@end

