/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol RTPersistenceMirroringRequestDelegate <NSObject>
@optional
-(void)mirroringRequestDidBegin:(id)arg1;

@required
-(BOOL)mirroringRequest:(id)arg1 didFailWithError:(id)arg2;
-(void)mirroringRequestDidSucceed:(id)arg1;

@end

