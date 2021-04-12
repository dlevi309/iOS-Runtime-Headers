/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber, NSString;

@interface ASProvisionResponse : ASItem {

	NSArray* _policies;
	NSNumber* _status;
	BOOL _remoteWipe;
	BOOL _accountOnlyRemoteWipe;
	NSString* _policyType;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
-(id)init;
-(id)description;
-(id)status;
-(id)policies;
-(void)_setStatus:(id)arg1 ;
-(id)initWithPolicyType:(id)arg1 ;
-(id)policyType;
-(id)asParseRules;
-(void)_setPolicies:(id)arg1 ;
-(void)_setRemoteWipe:(id)arg1 ;
-(void)_setAccountOnlyRemoteWipe:(id)arg1 ;
-(void)setPolicyType:(id)arg1 ;
-(BOOL)remoteWipe;
-(BOOL)accountOnlyRemoteWipe;
@end

