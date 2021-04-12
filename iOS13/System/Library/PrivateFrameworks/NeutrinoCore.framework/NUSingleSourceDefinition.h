/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUSourceDefinition.h>

@protocol NUSourceDerivation;
@interface NUSingleSourceDefinition : NUSourceDefinition {

	id<NUSourceDerivation> _sourceDerivation;

}

@property (retain) id<NUSourceDerivation> sourceDerivation;              //@synthesize sourceDerivation=_sourceDerivation - In the implementation block
-(id)init;
-(id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id<NUSourceDerivation>)sourceDerivation;
-(void)setSourceDerivation:(id<NUSourceDerivation>)arg1 ;
-(id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
@end

