/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol RTIInputSystemDelegate <NSObject>
@optional
-(void)inputSystemService:(id)arg1 inputSessionDocumentDidChange:(id)arg2;
-(void)inputSystemService:(id)arg1 inputSessionDidBegin:(id)arg2;
-(void)inputSystemService:(id)arg1 inputSessionDidUnpause:(id)arg2 withReason:(id)arg3;
-(void)inputSystemService:(id)arg1 inputSessionDidDie:(id)arg2;
-(void)inputSystemService:(id)arg1 inputSessionDidPause:(id)arg2 withReason:(id)arg3;
-(void)inputSystemService:(id)arg1 inputSessionDidEnd:(id)arg2;

@required
-(void)inputSystemService:(id)arg1 didCreateInputSession:(id)arg2;

@end

