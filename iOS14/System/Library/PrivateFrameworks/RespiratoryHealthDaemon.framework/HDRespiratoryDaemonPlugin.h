/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealthDaemon.framework/RespiratoryHealthDaemon
*/

#import <libobjc.A.dylib/HDPlugin.h>
#import <libobjc.A.dylib/HDTaskServerClassProvider.h>

@class NSString;

@interface HDRespiratoryDaemonPlugin : NSObject <HDPlugin, HDTaskServerClassProvider> {

	BOOL _forceFeaturesEnabled;

}

@property (nonatomic,copy,readonly) NSString * pluginIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)taskServerClasses;
-(id)extensionForProfile:(id)arg1 ;
-(id)extensionForHealthDaemon:(id)arg1 ;
-(NSString *)pluginIdentifier;
-(id)initWithForcingFeaturesEnabled:(BOOL)arg1 ;
@end

