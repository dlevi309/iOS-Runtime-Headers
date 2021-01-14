/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)currentLocale;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(BOOL)shouldUseiCloud;
-(NPSDomainAccessor *)domainAccessor;
-(id)nanoDomainAccessor;
-(NPSDomainAccessor *)globalDomainAccessor;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)_valueForPreferenceKey:(id)arg1 ;
-(id)init;
-(void)setGlobalDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(void)pairedWatchDidChange:(id)arg1 ;
-(void)dealloc;
@end

