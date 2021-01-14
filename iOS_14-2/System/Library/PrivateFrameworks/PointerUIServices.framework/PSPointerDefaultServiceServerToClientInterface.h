/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PointerUIServices.framework/PointerUIServices
*/


@protocol PSPointerDefaultServiceServerToClientInterface <NSObject>
@required
-(oneway void)clientInteractionStateDidChange:(id)arg1;
-(oneway void)adjustedDecelerationTargetPointerPosition:(id)arg1 velocity:(id)arg2 inContextID:(id)arg3 cursorRegionLookupRadius:(id)arg4 cursorRegionLookupResolution:(id)arg5 lookupConeAngle:(id)arg6 completion:(/*^block*/id)arg7;

@end

