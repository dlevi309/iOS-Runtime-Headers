/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
*/

#import <CoreSuggestionsUI/SGReminderSuggestionBase.h>
#import <libobjc.A.dylib/REMReminderCreationDelegate.h>

@class NSAttributedString, NSDateComponents, CLLocation, NSString, NSURL, NSUserActivity;

@interface SGReminderSuggestion : SGReminderSuggestionBase <REMReminderCreationDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSAttributedString * title; 
@property (nonatomic,readonly) NSAttributedString * notes; 
@property (nonatomic,readonly) NSDateComponents * dueDateComponents; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) NSString * locationString; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSUserActivity * userActivity; 
@property (nonatomic,readonly) BOOL wantsExtendedDetailOnlyView; 
@property (nonatomic,readonly) BOOL titleIsGeneratedSuggestion; 
@property (nonatomic,readonly) long long locationProximity; 
+(id)remindersImage;
-(NSURL *)url;
-(NSAttributedString *)title;
-(CLLocation *)location;
-(NSUserActivity *)userActivity;
-(NSString *)locationString;
-(NSAttributedString *)notes;
-(id)suggestionPrimaryAction;
-(void)_dismissViewController:(id)arg1 andSignalCompletionWithResult:(BOOL)arg2 ;
-(id)suggestionImage;
-(id)suggestionCategoryImage;
-(BOOL)wantsExtendedDetailOnlyView;
-(long long)locationProximity;
-(void)reminderCreationViewController:(id)arg1 didCreateReminder:(BOOL)arg2 error:(id)arg3 ;
-(NSDateComponents *)dueDateComponents;
@end

