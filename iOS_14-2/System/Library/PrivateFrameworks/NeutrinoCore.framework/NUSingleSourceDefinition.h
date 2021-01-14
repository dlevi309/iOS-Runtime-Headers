/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

