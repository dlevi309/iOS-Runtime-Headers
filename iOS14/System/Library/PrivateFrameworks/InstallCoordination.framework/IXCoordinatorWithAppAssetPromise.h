/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

