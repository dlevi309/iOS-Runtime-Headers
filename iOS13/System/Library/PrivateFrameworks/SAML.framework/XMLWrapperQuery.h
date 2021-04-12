/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

