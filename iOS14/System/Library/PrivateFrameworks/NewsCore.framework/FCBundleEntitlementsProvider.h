/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithConfigurationManager:(id)arg1 ;
-(id<FCCoreConfigurationManager>)configurationManager;
-(id<FCEntitlementsOverrideProviderType>)entitlementsOverrideProvider;
-(void)_fetchEntitlementsWithIgnoreCache:(BOOL)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setEntitlementsOverrideProvider:(id<FCEntitlementsOverrideProviderType>)arg1 ;
-(void)fetchEntitlementsWithIgnoreCache:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

