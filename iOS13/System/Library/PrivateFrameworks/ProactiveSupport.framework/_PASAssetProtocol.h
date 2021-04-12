/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

@class NSString;


@protocol _PASAssetProtocol <NSObject>
@property (nonatomic,readonly) unsigned long long assetVersion; 
@property (nonatomic,readonly) NSString * assetType; 
@property (nonatomic,readonly) unsigned long long compatibilityVersion; 
@property (nonatomic,readonly) unsigned long long bestAssetVersionObserved; 
@required
-(unsigned long long)compatibilityVersion;
-(unsigned long long)assetVersion;
-(NSString *)assetType;
-(id)registerUpdateHandler:(/*^block*/id)arg1;
-(BOOL)deregisterUpdateHandlerAsyncWithToken:(id)arg1;
-(id)pathForResourceWithName:(id)arg1 extension:(id)arg2;
-(unsigned long long)bestAssetVersionObserved;

@end

