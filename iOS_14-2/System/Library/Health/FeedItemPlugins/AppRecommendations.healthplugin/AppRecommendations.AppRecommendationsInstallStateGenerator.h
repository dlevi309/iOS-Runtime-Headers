/*
* Generated on Thursday, January 14, 2021 at 2:29:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/AppRecommendations.healthplugin/AppRecommendations
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class NSString;

@interface AppRecommendations.AppRecommendationsInstallStateGenerator : NSObject <LSApplicationWorkspaceObserverProtocol> {

	 $__lazy_storage_$_publisher;
	 $__lazy_storage_$_installStatePublisher;
	 $__lazy_storage_$_applicationWorkspace;

}

@property (readonly,nonatomic) NSString * description; 
-(NSString *)description;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

