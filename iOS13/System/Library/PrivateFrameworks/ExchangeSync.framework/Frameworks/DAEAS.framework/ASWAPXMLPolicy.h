/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASPolicy.h>

@class NSString;

@interface ASWAPXMLPolicy : ASPolicy {

	NSString* _data;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)data;
-(void)_setData:(id)arg1 ;
-(id)_policyForWAPProvisioningXMLData;
-(id)_wbxmlPolicyDict;
-(id)perDomainDictsForPolicy;
@end

