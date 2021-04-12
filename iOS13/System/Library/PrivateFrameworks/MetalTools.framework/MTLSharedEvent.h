/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


@protocol MTLSharedEvent <MTLEvent>
@property (assign) unsigned long long signaledValue; 
@required
-(void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(/*^block*/id)arg3;
-(void)setSignaledValue:(unsigned long long)arg1;
-(unsigned long long)signaledValue;
-(id)newSharedEventHandle;

@end

