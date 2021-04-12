/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUSourceDefinition.h>

@class NUComposition;

@interface NUCompositionSourceDefinition : NUSourceDefinition {

	NUComposition* _composition;

}

@property (readonly) NUComposition * composition;              //@synthesize composition=_composition - In the implementation block
-(id)init;
-(NUComposition *)composition;
-(id)initWithComposition:(id)arg1 ;
-(id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
@end

