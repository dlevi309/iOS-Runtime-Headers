/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUSourceDefinition.h>

@class NSArray;

@interface NUMultipleSourceDefinition : NUSourceDefinition {

	NSArray* _sourceDefinitions;

}

@property (readonly) NSArray * sourceDefinitions;              //@synthesize sourceDefinitions=_sourceDefinitions - In the implementation block
-(long long)mediaType;
-(id)init;
-(id)description;
-(id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithSourceDefinitions:(id)arg1 ;
-(NSArray *)sourceDefinitions;
@end

