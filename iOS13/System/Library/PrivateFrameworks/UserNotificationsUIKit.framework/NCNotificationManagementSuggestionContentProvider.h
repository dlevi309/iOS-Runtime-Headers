/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/NCNotificationManagementContentProvider.h>
#import <libobjc.A.dylib/NCNotificationManagementSuggestionContentProviding.h>

@protocol NCNotificationManagementSuggestionDelegate;
@class NSString;

@interface NCNotificationManagementSuggestionContentProvider : NCNotificationManagementContentProvider <NCNotificationManagementSuggestionContentProviding> {

	BOOL _auxiliaryOptionsVisible;
	NSString* _optionsSummaryText;
	unsigned long long _numberOfOptionButtons;
	id<NCNotificationManagementSuggestionDelegate> _suggestionDelegate;

}

@property (assign,nonatomic,__weak) id<NCNotificationManagementSuggestionDelegate> suggestionDelegate;              //@synthesize suggestionDelegate=_suggestionDelegate - In the implementation block
@property (nonatomic,copy) NSString * optionsSummaryText;                                                           //@synthesize optionsSummaryText=_optionsSummaryText - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfOptionButtons;                                              //@synthesize numberOfOptionButtons=_numberOfOptionButtons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * optionsSummaryTitle; 
@property (assign,nonatomic) BOOL auxiliaryOptionsVisible;                                                          //@synthesize auxiliaryOptionsVisible=_auxiliaryOptionsVisible - In the implementation block
-(id<NCNotificationManagementSuggestionDelegate>)suggestionDelegate;
-(void)setSuggestionDelegate:(id<NCNotificationManagementSuggestionDelegate>)arg1 ;
-(NSString *)optionsSummaryText;
-(unsigned long long)numberOfOptionButtons;
-(void)setOptionsSummaryText:(NSString *)arg1 ;
-(void)setNumberOfOptionButtons:(unsigned long long)arg1 ;
-(BOOL)auxiliaryOptionsVisible;
-(void)setAuxiliaryOptionsVisible:(BOOL)arg1 ;
-(void)configureOptionButtons:(id)arg1 ;
-(void)logSuggestionResponse:(long long)arg1 ;
-(id)initWithNotificationRequest:(id)arg1 bundleDisplayName:(id)arg2 managementDelegate:(id)arg3 suggestionDelegate:(id)arg4 ;
@end

