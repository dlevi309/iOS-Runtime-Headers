/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


@protocol MTLSharedEvent <MTLEvent>
@property (assign) unsigned long long signaledValue; 
@required
-(unsigned long long)signaledValue;
-(id)newSharedEventHandle;
-(void)setSignaledValue:(unsigned long long)arg1;
-(void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(/*^block*/id)arg3;

@end

