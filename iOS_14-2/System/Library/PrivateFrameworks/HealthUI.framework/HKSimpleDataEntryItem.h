/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)cell;
-(id<HKSimpleDataEntryItemDelegate>)delegate;
-(void)setDelegate:(id<HKSimpleDataEntryItemDelegate>)arg1 ;
-(unsigned long long)placeholderType;
-(void)localeDidChange:(id)arg1 ;
-(void)setToolbarDelegate:(id<HKSimpleDataEntryItemToolbarDelegate>)arg1 ;
-(void)beginEditing;
-(void)updateCellDisplay;
-(id)formattedKeyAndValue;
-(id)accessoryToolbar;
-(id<HKSimpleDataEntryItemToolbarDelegate>)toolbarDelegate;
-(void)toolbarPrevButtonPressed:(id)arg1 ;
-(void)toolbarNextButtonPressed:(id)arg1 ;
-(void)toolbarDoneButtonPressed:(id)arg1 ;
-(void)setPlaceholderType:(unsigned long long)arg1 ;
@end

