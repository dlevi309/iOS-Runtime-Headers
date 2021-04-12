/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
*/

@class NSAttributedString, NSDateComponents, CLLocation, NSString, NSURL, NSUserActivity;


@protocol REMReminderCreationDelegate <NSObject>
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
@optional
-(BOOL)wantsExtendedDetailOnlyView;
-(BOOL)titleIsGeneratedSuggestion;
-(long long)locationProximity;

@required
-(NSAttributedString *)notes;
-(NSUserActivity *)userActivity;
-(NSString *)locationString;
-(CLLocation *)location;
-(NSURL *)url;
-(NSDateComponents *)dueDateComponents;
-(NSAttributedString *)title;
-(void)reminderCreationViewController:(id)arg1 didCreateReminder:(BOOL)arg2 error:(id)arg3;

@end

