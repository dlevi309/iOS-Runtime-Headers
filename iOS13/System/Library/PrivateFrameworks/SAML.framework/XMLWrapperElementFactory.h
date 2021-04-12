/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/


#import <SAML/SAML-Structs.h>
@interface XMLWrapperElementFactory : NSObject
+(void)initialize;
+(id)sharedInstance;
+(Class)elementClassByTagName:(id)arg1 ;
+(unsigned long long)elementTypeByTagName:(id)arg1 ;
+(void)registerClass:(Class)arg1 forElementName:(id)arg2 ;
-(Class)classForXMLNode:(xmlNode*)arg1 error:(id*)arg2 ;
@end

