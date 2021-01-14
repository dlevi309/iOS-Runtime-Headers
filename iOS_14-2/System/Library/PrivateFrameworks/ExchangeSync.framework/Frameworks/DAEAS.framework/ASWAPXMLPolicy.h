/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setData:(id)arg1 ;
-(id)data;
-(id)_policyForWAPProvisioningXMLData;
-(id)_wbxmlPolicyDict;
-(id)perDomainDictsForPolicy;
@end

