/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString;

@interface FCEndpointConfiguration : NSObject {

	NSString* _clientAPIBaseURLString;
	NSString* _notificationsBaseURLString;
	NSString* _staticAssetBaseUrlString;
	NSString* _remoteDataSourceBaseUrlString;
	NSString* _appAnalyticsBaseURLString;

}

@property (nonatomic,readonly) NSString * clientAPIBaseURLString;                     //@synthesize clientAPIBaseURLString=_clientAPIBaseURLString - In the implementation block
@property (nonatomic,readonly) NSString * notificationsBaseURLString;                 //@synthesize notificationsBaseURLString=_notificationsBaseURLString - In the implementation block
@property (nonatomic,readonly) NSString * staticAssetBaseUrlString;                   //@synthesize staticAssetBaseUrlString=_staticAssetBaseUrlString - In the implementation block
@property (nonatomic,readonly) NSString * remoteDataSourceBaseUrlString;              //@synthesize remoteDataSourceBaseUrlString=_remoteDataSourceBaseUrlString - In the implementation block
@property (nonatomic,readonly) NSString * appAnalyticsBaseURLString;                  //@synthesize appAnalyticsBaseURLString=_appAnalyticsBaseURLString - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 appAnalyticsBaseURLString:(id)arg5 ;
-(NSString *)clientAPIBaseURLString;
-(NSString *)notificationsBaseURLString;
-(NSString *)staticAssetBaseUrlString;
-(NSString *)remoteDataSourceBaseUrlString;
-(NSString *)appAnalyticsBaseURLString;
-(id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseUrlString:(id)arg3 remoteDataSourceBaseUrl:(id)arg4 ;
-(id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 ;
@end

