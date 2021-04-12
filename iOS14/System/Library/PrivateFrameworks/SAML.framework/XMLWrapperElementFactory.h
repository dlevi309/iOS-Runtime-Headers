/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

