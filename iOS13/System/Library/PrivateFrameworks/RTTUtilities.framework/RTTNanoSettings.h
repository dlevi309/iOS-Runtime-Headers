/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)currentLocale;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)uuidFromContext:(id)arg1 ;
-(id)valueForPreferenceKey:(id)arg1 andContext:(id)arg2 ;
-(NPSDomainAccessor *)domainAccessor;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(NPSDomainAccessor *)globalDomainAccessor;
-(void)setGlobalDomainAccessor:(NPSDomainAccessor *)arg1 ;
@end

