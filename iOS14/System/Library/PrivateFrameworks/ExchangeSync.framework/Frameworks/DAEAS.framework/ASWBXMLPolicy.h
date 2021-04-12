/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASPolicy.h>

@class NSMutableDictionary;

@interface ASWBXMLPolicy : ASPolicy {

	NSMutableDictionary* _policyData;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)perDomainDictsForPolicy;
-(void)_setPolicyData:(id)arg1 ;
-(void)_cleanUpPolicyData:(id)arg1 ;
@end

