/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTitle:(NSString *)arg1 ;
-(void)setSelectedIndex:(long long)arg1 ;
-(long long)selectedIndex;
-(NSArray *)pickerItems;
-(void)setPickerItems:(NSArray *)arg1 ;
-(NSString *)title;
-(id)pickerItemAtCurrentIndex;
@end

