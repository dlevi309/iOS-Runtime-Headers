/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEVPNManager.h>

@class NSArray;

@interface NETunnelProviderManager : NEVPNManager {

	NSArray* _safariDomains;
	NSArray* _mailDomains;
	NSArray* _calendarDomains;
	NSArray* _contactsDomains;
	NSArray* _appRules;

}

@property (readonly) long long routingMethod; 
@property (copy) NSArray * safariDomains;                  //@synthesize safariDomains=_safariDomains - In the implementation block
@property (copy) NSArray * mailDomains;                    //@synthesize mailDomains=_mailDomains - In the implementation block
@property (copy) NSArray * calendarDomains;                //@synthesize calendarDomains=_calendarDomains - In the implementation block
@property (copy) NSArray * contactsDomains;                //@synthesize contactsDomains=_contactsDomains - In the implementation block
@property (copy) NSArray * appRules;                       //@synthesize appRules=_appRules - In the implementation block
+(id)copyDesignatedRequirementForProvider:(id*)arg1 extensionPoint:(id)arg2 ;
+(void)loadAllFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)forPerAppVPN;
-(id)init;
-(NSArray *)mailDomains;
-(NSArray *)calendarDomains;
-(NSArray *)contactsDomains;
-(void)setSafariDomains:(NSArray *)arg1 ;
-(void)setMailDomains:(NSArray *)arg1 ;
-(void)setCalendarDomains:(NSArray *)arg1 ;
-(void)setContactsDomains:(NSArray *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isProtocolTypeValid:(long long)arg1 ;
-(void)additionalSetup;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithSessionType:(int)arg1 tunnelType:(long long)arg2 ;
-(NSArray *)appRules;
-(void)setAppRules:(NSArray *)arg1 ;
-(long long)routingMethod;
-(void)loadAppRules;
-(id)copyAppRules;
-(NSArray *)safariDomains;
@end

