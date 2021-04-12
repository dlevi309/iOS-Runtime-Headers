/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSUserDefaults;

@interface WBSAllowedLegacyTLSHostManager : NSObject {

	NSUserDefaults* _browserDefaults;

}
-(id)initWithBrowserDefaults:(id)arg1 ;
-(BOOL)isLegacyTLSAllowedForHost:(id)arg1 ;
-(void)allowLegacyTLSForHost:(id)arg1 ;
-(void)clearAllLegacyTLSHosts;
-(void)clearLegacyTLSForHostIfPresent:(id)arg1 ;
-(void)clearLegacyTLSForHosts:(id)arg1 ;
@end

