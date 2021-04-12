/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithComposition:(id)arg1 ;
-(NUComposition *)composition;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)sourceDefinition:(out id*)arg1 ;
@end

