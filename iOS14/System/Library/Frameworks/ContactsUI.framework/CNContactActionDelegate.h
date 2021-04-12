/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNContactActionDelegate <NSObject>
@required
-(void)action:(id)arg1 prepareChildContactViewController:(id)arg2 sender:(id)arg3;
-(void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3;
-(void)action:(id)arg1 dismissViewController:(id)arg2 sender:(id)arg3;
-(void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3;
-(void)actionDidUpdate:(id)arg1;
-(void)actionWasCanceled:(id)arg1;
-(id)contactViewCache;
-(void)actionDidFinish:(id)arg1;

@end

