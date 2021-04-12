/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWSetupTask.h>

@protocol SWScriptsManager;
@class NSString;

@interface SWScriptsSetupTask : NSObject <SWSetupTask> {

	id<SWScriptsManager> _scriptsManager;

}

@property (nonatomic,readonly) id<SWScriptsManager> scriptsManager;              //@synthesize scriptsManager=_scriptsManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
-(NSString *)identifier;
-(void)performSetup;
-(id<SWScriptsManager>)scriptsManager;
-(id)initWithScriptsManager:(id)arg1 ;
@end

