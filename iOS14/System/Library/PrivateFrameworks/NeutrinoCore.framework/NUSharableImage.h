/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol NUSharableImage <NSObject>
@required
-(void)incrementUseCount;
-(BOOL)decrementUseCount;
-(BOOL)isInUse;
-(int)useCount;
-(BOOL)isShared;

@end

