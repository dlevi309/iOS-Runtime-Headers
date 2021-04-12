/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
*/


@class INCExtensionConnection;

@interface INCAppProxy : NSObject {

	INCExtensionConnection* _connection;

}

@property (nonatomic,__weak,readonly) INCExtensionConnection * _connection;              //@synthesize connection=_connection - In the implementation block
+(void)initialize;
+(BOOL)shouldLaunchAppInBackgroundWithIntent:(id)arg1 intentResponse:(id)arg2 ;
-(INCExtensionConnection *)_connection;
-(id)_initWithConnection:(id)arg1 ;
-(void)launchAppInBackground:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)launchAppInBackground:(BOOL)arg1 restrictAppsToCarPlay:(BOOL)arg2 userActivityIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

