/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol RBBundlePropertiesLSProviderDelegate;
@class NSCache, NSString;

@interface RBBundlePropertiesLSProvider : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSCache* _propertiesByIdentity;
	id<RBBundlePropertiesLSProviderDelegate> _delegate;
	os_unfair_lock_s _lock;

}

@property (assign,nonatomic,__weak) id<RBBundlePropertiesLSProviderDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<RBBundlePropertiesLSProviderDelegate>)delegate;
-(NSString *)debugDescription;
-(void)setDelegate:(id<RBBundlePropertiesLSProviderDelegate>)arg1 ;
-(id)propertiesForIdentity:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)dealloc;
@end

