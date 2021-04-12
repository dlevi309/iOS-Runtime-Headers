/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MDM.framework/MDM
*/

#import <MDM/MCMDMParser.h>

@interface MCUserMDMParser : MCMDMParser
-(id)_allCommands;
-(id)_profileList:(id)arg1 ;
-(id)_installProfile:(id)arg1 accessRights:(int)arg2 ;
-(id)_removeProfile:(id)arg1 ;
-(id)_restrictions:(id)arg1 ;
-(id)_allowedDeviceQueriesForAccessRights:(int)arg1 ;
-(void)_performQuery:(id)arg1 withResultDictionary:(id)arg2 ;
-(void)_sendAnalyticsMDMCommandEventWithRequest:(id)arg1 response:(id)arg2 ;
@end

