/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@protocol NRMutableStateProtocol <NSObject,NSSecureCoding,NSCopying,NRMutableStateObserverProtocol,NRMutableStateParentProtocol>
@required
+(id)diffFrom:(id)arg1 to:(id)arg2;
-(id)applyDiff:(id)arg1;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4;

@end

