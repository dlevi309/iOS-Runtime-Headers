/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
*/


@class INCExtensionConnection;

@interface INCAppProxy : NSObject {

	INCExtensionConnection* _connection;

}

@property (nonatomic,__weak,readonly) INCExtensionConnection * _connection;              //@synthesize connection=_connection - In the implementation block
+(void)initialize;
+(BOOL)shouldLaunchAppInBackgroundWithIntent:(id)arg1 intentResponse:(id)arg2 ;
-(id)_initWithConnection:(id)arg1 ;
-(INCExtensionConnection *)_connection;
-(void)launchAppInBackground:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)launchAppInBackground:(BOOL)arg1 restrictAppsToCarPlay:(BOOL)arg2 userActivityIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

