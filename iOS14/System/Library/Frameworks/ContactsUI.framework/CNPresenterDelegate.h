/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNPresenterDelegate <NSObject>
@property (readonly) BOOL isPresentingModalViewController; 
@required
-(void)sender:(id)arg1 presentViewController:(id)arg2;
-(void)sender:(id)arg1 dismissViewController:(id)arg2;
-(void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)isPresentingModalViewController;

@end

