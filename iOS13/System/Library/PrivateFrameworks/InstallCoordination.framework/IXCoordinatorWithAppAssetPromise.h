/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/


@protocol IXCoordinatorWithAppAssetPromise <NSObject>
@property (nonatomic,readonly) BOOL hasAppAssetPromise; 
@required
-(BOOL)setAppAssetPromise:(id)arg1 error:(id*)arg2;
-(id)appAssetPromiseWithError:(id*)arg1;
-(BOOL)setAppAssetPromiseResponsibleClient:(unsigned long long)arg1 error:(id*)arg2;
-(unsigned long long)appAssetPromiseResponsibleClientWithError:(id*)arg1;
-(BOOL)appAssetPromiseHasBegunFulfillment:(BOOL*)arg1 error:(id*)arg2;
-(BOOL)hasAppAssetPromise;

@end

