/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

#import <libobjc.A.dylib/IAMPropertyStorage.h>

@class ICInAppMessageManager, NSString;

@interface IAMICPropertyStorage : NSObject <IAMPropertyStorage> {

	ICInAppMessageManager* _iTunesCloudIAMManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)getPropertyForKey:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

