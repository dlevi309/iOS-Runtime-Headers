/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCBundleEntitlementsProviderType.h>

@protocol FCEntitlementsOverrideProviderType, FCCoreConfigurationManager;
@interface FCBundleEntitlementsProvider : NSObject <FCBundleEntitlementsProviderType> {

	id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;
	id<FCCoreConfigurationManager> _configurationManager;

}

@property (nonatomic,readonly) id<FCCoreConfigurationManager> configurationManager;                            //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,retain) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider; 
-(id<FCCoreConfigurationManager>)configurationManager;
-(id<FCEntitlementsOverrideProviderType>)entitlementsOverrideProvider;
-(void)setEntitlementsOverrideProvider:(id<FCEntitlementsOverrideProviderType>)arg1 ;
-(void)fetchEntitlementsWithIgnoreCache:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithConfigurationManager:(id)arg1 ;
-(void)_fetchEntitlementsWithIgnoreCache:(BOOL)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

