/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/


#import <SAML/SAML-Structs.h>
@interface XMLWrapperQuery : NSObject
+(void)initialize;
-(void)registerNamespace:(id)arg1 ;
-(id)executeXpathQuery:(xmlDoc*)arg1 query:(id)arg2 ctxNode:(xmlNode*)arg3 error:(id*)arg4 ;
-(BOOL)registerXpathNamespacesForCtx:(xmlXPathContext*)arg1 error:(id*)arg2 ;
-(id)elementForNode:(xmlNode*)arg1 ;
-(id)searchNodeWithXpathQuery:(xmlNode*)arg1 query:(id)arg2 error:(id*)arg3 ;
@end

