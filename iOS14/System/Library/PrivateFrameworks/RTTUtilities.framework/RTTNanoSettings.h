/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/

#import <RTTUtilities/RTTSettings.h>

@class NPSDomainAccessor;

@interface RTTNanoSettings : RTTSettings {

	NPSDomainAccessor* _domainAccessor;
	NPSDomainAccessor* _globalDomainAccessor;

}

@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;                    //@synthesize domainAccessor=_domainAccessor - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * globalDomainAccessor;              //@synthesize globalDomainAccessor=_globalDomainAccessor - In the implementation block
+(id)sharedInstance;
-(id)currentLocale;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(NPSDomainAccessor *)domainAccessor;
-(NPSDomainAccessor *)globalDomainAccessor;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)init;
-(void)setGlobalDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(id)valueForPreferenceKey:(id)arg1 andContext:(id)arg2 ;
-(id)uuidFromContext:(id)arg1 ;
@end

