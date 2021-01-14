/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWSetupTask.h>

@protocol SWDatastoreManager, SWScriptsManager;
@class NSString;

@interface SWDatastoreSetupTask : NSObject <SWSetupTask> {

	id<SWDatastoreManager> _datastoreManager;
	id<SWScriptsManager> _scriptsManager;

}

@property (nonatomic,readonly) id<SWDatastoreManager> datastoreManager;              //@synthesize datastoreManager=_datastoreManager - In the implementation block
@property (nonatomic,readonly) id<SWScriptsManager> scriptsManager;                  //@synthesize scriptsManager=_scriptsManager - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)identifier;
-(void)performSetup;
-(id<SWScriptsManager>)scriptsManager;
-(id<SWDatastoreManager>)datastoreManager;
-(id)initWithDatastoreManager:(id)arg1 scriptsManager:(id)arg2 ;
@end

