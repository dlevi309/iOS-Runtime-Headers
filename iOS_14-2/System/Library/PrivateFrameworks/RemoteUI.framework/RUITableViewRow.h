/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RUIElement.h>
#import <libobjc.A.dylib/RUIWebContainerViewDelegate.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol RUITableViewRowDelegate, RUITextFieldChangeObserver;
@class RemoteUITableViewCell, NSMutableArray, NSDate, UISwitch, NSDictionary, NSData, NSDateFormatter, UIView, RUIPage, RUIDetailButtonElement, UIControl, NSString;

@interface RUITableViewRow : RUIElement <RUIWebContainerViewDelegate, UIPickerViewDelegate, UITextFieldDelegate> {

	RemoteUITableViewCell* _tableCell;
	NSMutableArray* _selectOptions;
	long long _selectedRow;
	NSDate* _date;
	NSDate* _dateMax;
	NSDate* _dateMin;
	UISwitch* _switchControl;
	BOOL _switchValue;
	BOOL _rowInvalid;
	NSDictionary* _deleteAction;
	NSData* _data;
	float _cachedHeight;
	NSDateFormatter* _datePickerFormatter;
	BOOL _configured;
	BOOL _selected;
	BOOL _focused;
	BOOL _showingProgressIndicator;
	id<RUITableViewRowDelegate> _delegate;
	long long _datePickerMode;
	UIView* _pickerView;
	double _height;
	id<RUITextFieldChangeObserver> _textFieldChangeObserver;
	RUIPage* _linkedPage;
	RUIDetailButtonElement* _detailButton;
	long long _alignment;

}

@property (nonatomic,retain) NSDate * date;                                                                //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSDate * dateMin;                                                             //@synthesize dateMin=_dateMin - In the implementation block
@property (nonatomic,retain) NSDate * dateMax;                                                             //@synthesize dateMax=_dateMax - In the implementation block
@property (assign,nonatomic,__weak) id<RUITableViewRowDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL rowInvalid;                                                              //@synthesize rowInvalid=_rowInvalid - In the implementation block
@property (nonatomic,retain) NSDictionary * deleteAction;                                                  //@synthesize deleteAction=_deleteAction - In the implementation block
@property (nonatomic,retain) NSData * data;                                                                //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) long long selectedRow;                                                      //@synthesize selectedRow=_selectedRow - In the implementation block
@property (nonatomic,readonly) long long datePickerMode;                                                   //@synthesize datePickerMode=_datePickerMode - In the implementation block
@property (nonatomic,retain) UIView * pickerView;                                                          //@synthesize pickerView=_pickerView - In the implementation block
@property (assign,nonatomic) double height;                                                                //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) BOOL configured;                                                              //@synthesize configured=_configured - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                              //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isFocused,nonatomic) BOOL focused;                                                //@synthesize focused=_focused - In the implementation block
@property (assign,getter=isShowingProgressIndicator,nonatomic) BOOL showingProgressIndicator;              //@synthesize showingProgressIndicator=_showingProgressIndicator - In the implementation block
@property (nonatomic,readonly) UIControl * control; 
@property (assign,nonatomic,__weak) id<RUITextFieldChangeObserver> textFieldChangeObserver;                //@synthesize textFieldChangeObserver=_textFieldChangeObserver - In the implementation block
@property (assign,nonatomic,__weak) RUIPage * linkedPage;                                                  //@synthesize linkedPage=_linkedPage - In the implementation block
@property (nonatomic,retain) RUIDetailButtonElement * detailButton;                                        //@synthesize detailButton=_detailButton - In the implementation block
@property (nonatomic,readonly) BOOL indentWhileEditing; 
@property (assign,nonatomic) long long alignment;                                                          //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) BOOL isCopyable; 
@property (nonatomic,readonly) NSString * copyText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)resetLocale;
+(id)_formatterForDateYMD;
+(id)_timeZoneAdjustedDateFromDate:(id)arg1 ;
+(id)_formatterForMonthAndDay;
+(id)_formatterForYearAndMonth;
+(id)_formatterForShortDate;
-(void)setHeight:(double)arg1 ;
-(id)sourceURL;
-(void)setImage:(id)arg1 ;
-(id<RUITableViewRowDelegate>)delegate;
-(UIControl *)control;
-(long long)alignment;
-(void)setAttributes:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isSelected;
-(id)tableCell;
-(void)setPickerView:(UIView *)arg1 ;
-(void)_datePickerChanged:(id)arg1 ;
-(double)height;
-(void)setDate:(NSDate *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(void)setDelegate:(id<RUITableViewRowDelegate>)arg1 ;
-(void)setDetailButton:(RUIDetailButtonElement *)arg1 ;
-(RUIDetailButtonElement *)detailButton;
-(BOOL)isFocused;
-(NSString *)description;
-(void)_updateTextColors;
-(NSData *)data;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(NSDictionary *)deleteAction;
-(void)setFocused:(BOOL)arg1 ;
-(void)setDeleteAction:(NSDictionary *)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(long long)datePickerMode;
-(void)populatePostbackDictionary:(id)arg1 ;
-(NSDate *)date;
-(UIView *)pickerView;
-(BOOL)isCopyable;
-(BOOL)supportsAutomaticSelection;
-(void)setImageSize:(CGSize)arg1 ;
-(NSDate *)dateMin;
-(NSDate *)dateMax;
-(void)dealloc;
-(BOOL)configured;
-(void)setConfigured:(BOOL)arg1 ;
-(long long)selectedRow;
-(void)setShowingProgressIndicator:(BOOL)arg1 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(Class)tableCellClass;
-(void)setRowInvalid:(BOOL)arg1 ;
-(id)radioGroupSelectedColor;
-(void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2 ;
-(RUIPage *)linkedPage;
-(void)setValueFromString:(id)arg1 notify:(BOOL)arg2 ;
-(void)setLinkedPage:(RUIPage *)arg1 ;
-(id)selectOptions;
-(void)clearCachedHeight;
-(id)dateFormatterCalendarIdentifier;
-(float)rowHeightWithMax:(float)arg1 peggedHeight:(float)arg2 tableView:(id)arg3 indexPath:(id)arg4 ;
-(BOOL)indentWhileEditing;
-(NSString *)copyText;
-(BOOL)rowSupportsLoadingIndicator;
-(void)switchCanceled;
-(id)textColorForAttributeName:(id)arg1 ;
-(long long)tableCellStyle;
-(void)_updateContentForDisabledState;
-(id)_checkmarkAccessoryViewWithSelected:(BOOL)arg1 ;
-(void)accessoryImageLoaded;
-(void)setEditableTextFieldValue:(id)arg1 ;
-(void)_switchFlipped:(id)arg1 ;
-(void)setDateMin:(NSDate *)arg1 ;
-(void)setDateMax:(NSDate *)arg1 ;
-(id)_datePickerFormatter;
-(void)setSelectRowValue:(id)arg1 ;
-(void)setDetailAndPlaceholderText;
-(void)detailLabelActivatedLinkFromCell:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)loadAccessoryImage;
-(void)setSelectedRowTextColor;
-(BOOL)setSelectPageRowValue:(id)arg1 ;
-(void)setValueFromString:(id)arg1 ;
-(BOOL)rowInvalid;
-(BOOL)isShowingProgressIndicator;
-(id<RUITextFieldChangeObserver>)textFieldChangeObserver;
-(void)setTextFieldChangeObserver:(id<RUITextFieldChangeObserver>)arg1 ;
@end

