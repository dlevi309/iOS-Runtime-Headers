/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@class NSString, NSArray;

@interface VSCredentialEntryPicker : NSObject {

	NSString* _title;
	NSArray* _pickerItems;
	long long _selectedIndex;

}

@property (nonatomic,copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * pickerItems;                  //@synthesize pickerItems=_pickerItems - In the implementation block
@property (assign,nonatomic) long long selectedIndex;              //@synthesize selectedIndex=_selectedIndex - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(NSArray *)pickerItems;
-(void)setPickerItems:(NSArray *)arg1 ;
-(id)pickerItemAtCurrentIndex;
@end

