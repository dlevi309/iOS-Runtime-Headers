/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/SBSWidgetMetricsProviding.h>

@class BSServiceConnection, NSString;

@interface SBSWidgetMetricsServer : NSObject <SBSWidgetMetricsProviding> {

	BSServiceConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)checkOutServerInstance;
+(void)returnServerInstance:(id)arg1 ;
-(id)init;
-(id)_init;
-(id)systemMetricsForWidget:(id)arg1 ;
-(id)previewMetricsSpecificationForBundleIdentifier:(id)arg1 ;
-(id)previewMetricsSpecificationForDeviceContext:(id)arg1 displayContext:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)_createConnection;
-(void)dealloc;
@end

