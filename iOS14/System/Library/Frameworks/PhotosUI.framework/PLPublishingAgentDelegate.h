/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PLPublishingAgentDelegate
@optional
-(void)publishingAgentDidStartRemaking:(id)arg1;
-(void)publishingAgentDidEndRemaking:(id)arg1 didSucceed:(BOOL)arg2;

@required
-(void)publishingAgentWillBeDisplayed:(id)arg1;
-(void)publishingAgentDoneButtonClicked:(id)arg1;
-(void)publishingAgentCancelButtonClicked:(id)arg1;
-(void)publishingAgentDidBeginPublishing:(id)arg1;
-(void)publishingAgentDidEndPublishing:(id)arg1 error:(id)arg2;

@end

