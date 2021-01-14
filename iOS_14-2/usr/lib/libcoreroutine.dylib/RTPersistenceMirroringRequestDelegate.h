/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol RTPersistenceMirroringRequestDelegate <NSObject>
@optional
-(void)mirroringRequestDidBegin:(id)arg1;

@required
-(BOOL)mirroringRequest:(id)arg1 didFailWithError:(id)arg2;
-(void)mirroringRequestDidSucceed:(id)arg1;

@end

