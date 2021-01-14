/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUSourceDefinition.h>

@class NUComposition;

@interface NUCompositionSourceDefinition : NUSourceDefinition {

	NUComposition* _composition;

}

@property (readonly) NUComposition * composition;              //@synthesize composition=_composition - In the implementation block
-(id)init;
-(id)initWithComposition:(id)arg1 ;
-(NUComposition *)composition;
-(id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
@end

