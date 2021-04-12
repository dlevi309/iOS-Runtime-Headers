/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSRemotePlistControllerDelegate.h>

@class WBSRemotePlistController, NSString;

@interface WBSPasswordBreachConfigurationBagLoader : NSObject <WBSRemotePlistControllerDelegate> {

	WBSRemotePlistController* _remotePlistController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLoader;
-(id)init;
-(void)getConfigurationBagWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

