/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSRemotePlistSnapshot.h>

@class NSDictionary, NSString;

@interface WBSUserAgentQuirksSnapshot : NSObject <WBSRemotePlistSnapshot> {

	NSDictionary* _domainsToQuirkTypes;
	NSDictionary* _userAgentQuirks;
	NSDictionary* _sitesRequiringUserAgentQuirks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPlistData:(id)arg1 error:(id*)arg2 ;
-(id)plistDataWithFormat:(unsigned long long)arg1 ;
-(id)quirkTypeForDomain:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

