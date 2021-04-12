/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/


@protocol BSXPCServiceConnectionParent <NSObject>
@property (getter=_isInvalidated,nonatomic,readonly) BOOL _invalidated; 
@property (getter=_isClientInvalidated,nonatomic,readonly) BOOL _clientInvalidated; 
@required
-(BOOL)_isInvalidated;
-(BOOL)_isClientInvalidated;
-(void)_invalidateChildConnection:(id)arg1;

@end

