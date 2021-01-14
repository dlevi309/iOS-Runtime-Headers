/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUITapCommand.h>
#import <SearchUI/SearchUIFeedbackDelegate.h>

@class NSString;

@interface SearchUIWatchListPunchoutCommand : SearchUITapCommand <SearchUIFeedbackDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRowModel:(id)arg1 environment:(id)arg2 ;
-(void)presentViewController:(id)arg1 ;
-(void)performCommandWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)prefersModalPresentation;
@end

