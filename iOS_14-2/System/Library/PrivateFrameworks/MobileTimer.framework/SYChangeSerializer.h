/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol SYChangeSerializer <NSObject>
@optional
-(id)dataWithSYObject:(id)arg1;
-(id)SYObjectWithData:(id)arg1;
-(id)encodeSYChangeForBackwardCompatibility:(id)arg1 protocolVersion:(long long)arg2;
-(id)decodeChangeData:(id)arg1 fromProtocolVersion:(long long)arg2 ofType:(long long)arg3;

@required
-(id)dataFromChange:(id)arg1;
-(id)changeFromData:(id)arg1 ofType:(long long)arg2;

@end

