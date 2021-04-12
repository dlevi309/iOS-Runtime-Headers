/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <HearingUtilities/AXHASettings.h>

@class NPSDomainAccessor;

@interface HANanoSettings : AXHASettings {

	NPSDomainAccessor* _domainAccessor;
	NPSDomainAccessor* _globalDomainAccessor;

}

@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;                    //@synthesize domainAccessor=_domainAccessor - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * globalDomainAccessor;              //@synthesize globalDomainAccessor=_globalDomainAccessor - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)currentLocale;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)_valueForPreferenceKey:(id)arg1 ;
-(NPSDomainAccessor *)domainAccessor;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(NPSDomainAccessor *)globalDomainAccessor;
-(void)setGlobalDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(BOOL)shouldUseiCloud;
@end

