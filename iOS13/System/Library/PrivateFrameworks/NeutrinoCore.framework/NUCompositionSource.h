/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSource.h>

@class NUCompositionSourceDefinition, NUComposition;

@interface NUCompositionSource : NUSource {

	NUCompositionSourceDefinition* _sourceDefinition;

}

@property (nonatomic,readonly) NUComposition * composition; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NUComposition *)composition;
-(id)initWithComposition:(id)arg1 ;
-(id)sourceDefinition:(out id*)arg1 ;
@end

