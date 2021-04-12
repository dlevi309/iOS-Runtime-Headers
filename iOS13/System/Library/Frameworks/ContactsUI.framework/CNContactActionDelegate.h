/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNContactActionDelegate <NSObject>
@required
-(void)actionDidFinish:(id)arg1;
-(void)action:(id)arg1 prepareChildContactViewController:(id)arg2 sender:(id)arg3;
-(void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3;
-(void)action:(id)arg1 dismissViewController:(id)arg2 sender:(id)arg3;
-(void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3;
-(void)actionDidUpdate:(id)arg1;
-(void)actionWasCanceled:(id)arg1;
-(id)contactViewCache;

@end

