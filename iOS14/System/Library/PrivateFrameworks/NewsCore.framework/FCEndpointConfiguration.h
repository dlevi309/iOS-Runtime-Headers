/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString;

@interface FCEndpointConfiguration : NSObject {

	NSString* _clientAPIBaseURLString;
	NSString* _notificationsBaseURLString;
	NSString* _staticAssetBaseURLString;
	NSString* _remoteDataSourceBaseURLString;
	NSString* _newsletterAPIBaseURLString;
	NSString* _appAnalyticsBaseURLString;
	NSString* _fairPlayBaseURLString;
	NSString* _searchAPIBaseURLString;

}

@property (nonatomic,readonly) NSString * clientAPIBaseURLString;                     //@synthesize clientAPIBaseURLString=_clientAPIBaseURLString - In the implementation block
@property (nonatomic,readonly) NSString * notificationsBaseURLString;                 //@synthesize notificationsBaseURLString=_notificationsBaseURLString - In the implementation block
@property (nonatomic,readonly) NSString * staticAssetBaseURLString;                   //@synthesize staticAssetBaseURLString=_staticAssetBaseURLString - In the implementation block
@property (nonatomic,readonly) NSString * remoteDataSourceBaseURLString;              //@synthesize remoteDataSourceBaseURLString=_remoteDataSourceBaseURLString - In the implementation block
@property (nonatomic,readonly) NSString * newsletterAPIBaseURLString;                 //@synthesize newsletterAPIBaseURLString=_newsletterAPIBaseURLString - In the implementation block
@property (nonatomic,readonly) NSString * appAnalyticsBaseURLString;                  //@synthesize appAnalyticsBaseURLString=_appAnalyticsBaseURLString - In the implementation block
@property (nonatomic,readonly) NSString * fairPlayBaseURLString;                      //@synthesize fairPlayBaseURLString=_fairPlayBaseURLString - In the implementation block
@property (nonatomic,readonly) NSString * searchAPIBaseURLString;                     //@synthesize searchAPIBaseURLString=_searchAPIBaseURLString - In the implementation block
-(id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 newsletterAPIBaseURLString:(id)arg5 appAnalyticsBaseURLString:(id)arg6 fairPlayBaseURLString:(id)arg7 searchAPIBaseURLString:(id)arg8 ;
-(id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 newsletterAPIBaseURLString:(id)arg5 appAnalyticsBaseURLString:(id)arg6 ;
-(id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 newsletterAPIBaseURLString:(id)arg5 appAnalyticsBaseURLString:(id)arg6 fairPlayBaseURLString:(id)arg7 ;
-(id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 ;
-(id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 newsletterAPIBaseURLString:(id)arg5 ;
-(id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseURLString:(id)arg3 remoteDataSourceBaseURLString:(id)arg4 ;
-(NSString *)fairPlayBaseURLString;
-(NSString *)searchAPIBaseURLString;
-(NSString *)clientAPIBaseURLString;
-(NSString *)notificationsBaseURLString;
-(NSString *)staticAssetBaseURLString;
-(NSString *)remoteDataSourceBaseURLString;
-(NSString *)newsletterAPIBaseURLString;
-(NSString *)appAnalyticsBaseURLString;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

