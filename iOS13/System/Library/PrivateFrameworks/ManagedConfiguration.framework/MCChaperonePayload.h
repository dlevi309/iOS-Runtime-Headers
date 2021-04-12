/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSNumber;

@interface MCChaperonePayload : MCPayload {

	NSData* _pairingCertificateData;
	BOOL _nonChaperonePairingAllowed;
	NSNumber* _nonChaperonePairingAllowedNum;

}

@property (nonatomic,readonly) NSNumber * nonChaperonePairingAllowedNum;              //@synthesize nonChaperonePairingAllowedNum=_nonChaperonePairingAllowedNum - In the implementation block
@property (nonatomic,retain,readonly) NSData * pairingCertificateData;                //@synthesize pairingCertificateData=_pairingCertificateData - In the implementation block
@property (nonatomic,readonly) BOOL nonChaperonePairingAllowed;                       //@synthesize nonChaperonePairingAllowed=_nonChaperonePairingAllowed - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(NSData *)pairingCertificateData;
-(BOOL)nonChaperonePairingAllowed;
-(NSNumber *)nonChaperonePairingAllowedNum;
@end

