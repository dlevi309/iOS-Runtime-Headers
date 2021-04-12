/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, HKAttributionTextView, NSArray, NSString;

@interface HRAtrialFibrillationDataTypeDescriptionCell : UITableViewCell <UITextViewDelegate> {

	BOOL _featureAvailable;
	UITextView* _descriptionTextView;
	UITextView* _settingsDescriptionTextView;
	HKAttributionTextView* _settingsLinkTextView;
	NSArray* _availableVerticalConstraints;
	NSArray* _unavailableVerticalConstraints;

}

@property (nonatomic,retain) UITextView * descriptionTextView;                          //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
@property (nonatomic,retain) UITextView * settingsDescriptionTextView;                  //@synthesize settingsDescriptionTextView=_settingsDescriptionTextView - In the implementation block
@property (nonatomic,retain) HKAttributionTextView * settingsLinkTextView;              //@synthesize settingsLinkTextView=_settingsLinkTextView - In the implementation block
@property (nonatomic,retain) NSArray * availableVerticalConstraints;                    //@synthesize availableVerticalConstraints=_availableVerticalConstraints - In the implementation block
@property (nonatomic,retain) NSArray * unavailableVerticalConstraints;                  //@synthesize unavailableVerticalConstraints=_unavailableVerticalConstraints - In the implementation block
@property (assign,nonatomic) BOOL featureAvailable;                                     //@synthesize featureAvailable=_featureAvailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)setFeatureAvailable:(BOOL)arg1 ;
-(void)_setupDescriptionTextView;
-(void)_updateTextForDescriptionTextView;
-(BOOL)featureAvailable;
-(UITextView *)descriptionTextView;
-(void)setDescriptionTextView:(UITextView *)arg1 ;
-(UITextView *)settingsDescriptionTextView;
-(void)setSettingsDescriptionTextView:(UITextView *)arg1 ;
-(HKAttributionTextView *)settingsLinkTextView;
-(void)setSettingsLinkTextView:(HKAttributionTextView *)arg1 ;
-(NSArray *)availableVerticalConstraints;
-(void)setAvailableVerticalConstraints:(NSArray *)arg1 ;
-(NSArray *)unavailableVerticalConstraints;
-(void)setUnavailableVerticalConstraints:(NSArray *)arg1 ;
@end

