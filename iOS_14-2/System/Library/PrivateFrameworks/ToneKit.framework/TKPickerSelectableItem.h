/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <ToneKit/TKPickerRowItem.h>

@class NSString;

@interface TKPickerSelectableItem : TKPickerRowItem {

	BOOL _shouldTintText;
	BOOL _showsCheckmark;
	BOOL _showsDisclosureIndicator;
	BOOL _shouldPreventSelection;
	NSString* _text;
	NSString* _detailText;

}

@property (setter=_setText:,nonatomic,copy) NSString * text;                                                  //@synthesize text=_text - In the implementation block
@property (assign,setter=_setShouldTintText:,nonatomic) BOOL shouldTintText;                                  //@synthesize shouldTintText=_shouldTintText - In the implementation block
@property (setter=_setDetailText:,nonatomic,copy) NSString * detailText;                                      //@synthesize detailText=_detailText - In the implementation block
@property (assign,setter=_setShowsCheckmark:,nonatomic) BOOL showsCheckmark;                                  //@synthesize showsCheckmark=_showsCheckmark - In the implementation block
@property (assign,setter=_setShowsDisclosureIndicator:,nonatomic) BOOL showsDisclosureIndicator;              //@synthesize showsDisclosureIndicator=_showsDisclosureIndicator - In the implementation block
@property (assign,setter=_setShouldPreventSelection:,nonatomic) BOOL shouldPreventSelection;                  //@synthesize shouldPreventSelection=_shouldPreventSelection - In the implementation block
-(void)_setText:(id)arg1 ;
-(NSString *)text;
-(NSString *)detailText;
-(BOOL)showsDisclosureIndicator;
-(void)_setShowsCheckmark:(BOOL)arg1 ;
-(void)_setShowsDisclosureIndicator:(BOOL)arg1 ;
-(void)_setShouldTintText:(BOOL)arg1 ;
-(void)_setShouldPreventSelection:(BOOL)arg1 ;
-(void)_setDetailText:(id)arg1 ;
-(BOOL)shouldTintText;
-(BOOL)shouldPreventSelection;
-(BOOL)showsCheckmark;
-(void)_appendDescriptionOfAttributesToString:(id)arg1 ;
@end

