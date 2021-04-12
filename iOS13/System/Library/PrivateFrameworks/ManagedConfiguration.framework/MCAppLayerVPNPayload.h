/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCVPNPayloadBase.h>

@class NSString, NSArray;

@interface MCAppLayerVPNPayload : MCVPNPayloadBase {

	BOOL _restrictDomains;
	NSString* _VPNUUID;
	NSArray* _SafariDomains;
	NSArray* _SMBDomains;
	NSArray* _mailDomains;
	NSArray* _calendarDomains;
	NSArray* _contactsDomains;

}

@property (nonatomic,retain) NSString * VPNUUID;                                       //@synthesize VPNUUID=_VPNUUID - In the implementation block
@property (setter=afariDomains,nonatomic,retain) NSArray * SafariDomains;              //@synthesize SafariDomains=_SafariDomains - In the implementation block
@property (setter=MBDomains,nonatomic,retain) NSArray * SMBDomains;                    //@synthesize SMBDomains=_SMBDomains - In the implementation block
@property (nonatomic,retain) NSArray * mailDomains;                                    //@synthesize mailDomains=_mailDomains - In the implementation block
@property (nonatomic,retain) NSArray * calendarDomains;                                //@synthesize calendarDomains=_calendarDomains - In the implementation block
@property (nonatomic,retain) NSArray * contactsDomains;                                //@synthesize contactsDomains=_contactsDomains - In the implementation block
@property (nonatomic,readonly) BOOL restrictDomains;                                   //@synthesize restrictDomains=_restrictDomains - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)filterForUserEnrollmentOutError:(id*)arg1 ;
-(NSString *)VPNUUID;
-(NSArray *)SafariDomains;
-(NSArray *)SMBDomains;
-(NSArray *)mailDomains;
-(NSArray *)calendarDomains;
-(NSArray *)contactsDomains;
-(void)setVPNUUID:(NSString *)arg1 ;
-(void)setSafariDomains:(NSArray *)arg1 ;
-(void)setSMBDomains:(NSArray *)arg1 ;
-(void)setMailDomains:(NSArray *)arg1 ;
-(void)setCalendarDomains:(NSArray *)arg1 ;
-(void)setContactsDomains:(NSArray *)arg1 ;
-(BOOL)restrictDomains;
@end

