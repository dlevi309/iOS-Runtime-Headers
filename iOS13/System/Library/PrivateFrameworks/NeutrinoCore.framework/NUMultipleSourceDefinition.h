/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUSourceDefinition.h>

@class NSArray;

@interface NUMultipleSourceDefinition : NUSourceDefinition {

	NSArray* _sourceDefinitions;

}

@property (readonly) NSArray * sourceDefinitions;              //@synthesize sourceDefinitions=_sourceDefinitions - In the implementation block
-(id)init;
-(id)description;
-(long long)mediaType;
-(id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithSourceDefinitions:(id)arg1 ;
-(NSArray *)sourceDefinitions;
@end

