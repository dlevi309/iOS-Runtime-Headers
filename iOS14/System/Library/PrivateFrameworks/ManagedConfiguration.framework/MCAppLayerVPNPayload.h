/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSArray* _excludedDomains;
	NSArray* _associatedDomains;

}

@property (nonatomic,retain) NSString * VPNUUID;                                       //@synthesize VPNUUID=_VPNUUID - In the implementation block
@property (setter=afariDomains,nonatomic,retain) NSArray * SafariDomains;              //@synthesize SafariDomains=_SafariDomains - In the implementation block
@property (setter=MBDomains,nonatomic,retain) NSArray * SMBDomains;                    //@synthesize SMBDomains=_SMBDomains - In the implementation block
@property (nonatomic,retain) NSArray * mailDomains;                                    //@synthesize mailDomains=_mailDomains - In the implementation block
@property (nonatomic,retain) NSArray * calendarDomains;                                //@synthesize calendarDomains=_calendarDomains - In the implementation block
@property (nonatomic,retain) NSArray * contactsDomains;                                //@synthesize contactsDomains=_contactsDomains - In the implementation block
@property (nonatomic,retain) NSArray * excludedDomains;                                //@synthesize excludedDomains=_excludedDomains - In the implementation block
@property (nonatomic,retain) NSArray * associatedDomains;                              //@synthesize associatedDomains=_associatedDomains - In the implementation block
@property (nonatomic,readonly) BOOL restrictDomains;                                   //@synthesize restrictDomains=_restrictDomains - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(NSString *)VPNUUID;
-(void)setSMBDomains:(NSArray *)arg1 ;
-(void)setMailDomains:(NSArray *)arg1 ;
-(id)filterForUserEnrollmentOutError:(id*)arg1 ;
-(void)setContactsDomains:(NSArray *)arg1 ;
-(void)setCalendarDomains:(NSArray *)arg1 ;
-(NSArray *)associatedDomains;
-(NSArray *)SMBDomains;
-(id)verboseDescription;
-(NSArray *)SafariDomains;
-(void)setVPNUUID:(NSString *)arg1 ;
-(NSArray *)mailDomains;
-(NSArray *)calendarDomains;
-(NSArray *)contactsDomains;
-(NSArray *)excludedDomains;
-(void)setSafariDomains:(NSArray *)arg1 ;
-(BOOL)restrictDomains;
-(void)setExcludedDomains:(NSArray *)arg1 ;
-(void)setAssociatedDomains:(NSArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

