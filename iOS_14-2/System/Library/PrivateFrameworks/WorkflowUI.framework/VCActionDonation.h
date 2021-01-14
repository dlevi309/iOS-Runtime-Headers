/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

@class NSString, NSDate, INShortcut;


@protocol VCActionDonation <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSDate * date; 
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifier; 
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifierForDisplay; 
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifierForLaunching; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * fullDescription; 
@property (nonatomic,copy,readonly) NSString * suggestedPhrase; 
@property (nonatomic,readonly) id uniqueProperty; 
@property (nonatomic,readonly) INShortcut * shortcut; 
@required
-(NSString *)subtitle;
-(NSString *)fullDescription;
-(INShortcut *)shortcut;
-(NSString *)sourceAppIdentifier;
-(NSString *)sourceAppIdentifierForDisplay;
-(NSString *)sourceAppIdentifierForLaunching;
-(NSString *)suggestedPhrase;
-(id)uniqueProperty;
-(NSDate *)date;
-(NSString *)identifier;
-(NSString *)title;

@end

