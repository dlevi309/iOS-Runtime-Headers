/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
*/

#import <SiriOntology/SiriOntology-Structs.h>
#import <SiriOntology/USOGraphNode.h>

@interface USOEntityNode : USOGraphNode {

	UsoEntityNode* _usoEntityNode;

}
-(id)initWithCppEntityNode:(UsoEntityNode*)arg1 ;
-(void)addIdentifierWithValue:(id)arg1 appBundleId:(id)arg2 namespaceString:(id)arg3 ;
-(void)addUtteranceAlignmentWithAsrIndex:(unsigned)arg1 StartIndex:(unsigned)arg2 endIndex:(unsigned)arg3 startUnicodeScalarIndex:(unsigned)arg4 endUnicodeScalarIndex:(unsigned)arg5 ;
@end

