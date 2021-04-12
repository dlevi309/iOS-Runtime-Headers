/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
*/

#import <iCloudQuota/_ICQFlowSpecification.h>

@class NSDictionary;

@interface _ICQUpgradeFlowSpecification : _ICQFlowSpecification {

	NSDictionary* _serverDict;
	BOOL _needsWiFi;
	long long _offerType;

}

@property (assign,nonatomic) long long offerType;                      //@synthesize offerType=_offerType - In the implementation block
@property (assign,nonatomic) BOOL needsWiFi;                           //@synthesize needsWiFi=_needsWiFi - In the implementation block
@property (nonatomic,readonly) NSDictionary * serverDict; 
+(id)upgradeFlowSpecificationSampleForLevel:(long long)arg1 ;
+(id)_upgradePageIdentifierForError:(id)arg1 ;
+(id)sanitizedUpgradeFlowServerDict:(id)arg1 ;
-(void)setOfferType:(long long)arg1 ;
-(long long)offerType;
-(id)initWithServerDictionary:(id)arg1 ;
-(NSDictionary *)serverDict;
-(id)upgradeSuccessPage;
-(id)upgradeFailurePage;
-(id)upgradePageForSuccess:(BOOL)arg1 ;
-(id)upgradeSuccessPageForWiFi;
-(id)upgradeFailurePageForNetwork;
-(id)upgradePageForError:(id)arg1 ;
-(BOOL)needsWiFi;
-(void)setNeedsWiFi:(BOOL)arg1 ;
@end

