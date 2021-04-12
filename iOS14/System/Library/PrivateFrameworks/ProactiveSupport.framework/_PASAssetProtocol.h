/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)pathForResourceWithName:(id)arg1 extension:(id)arg2;
-(BOOL)deregisterUpdateHandlerAsyncWithToken:(id)arg1;
-(id)registerUpdateHandler:(/*^block*/id)arg1;
-(unsigned long long)bestAssetVersionObserved;

@end

