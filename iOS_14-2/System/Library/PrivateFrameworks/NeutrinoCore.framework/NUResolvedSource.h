/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSource.h>

@class NUSourceDefinition;

@interface NUResolvedSource : NUSource {

	NUSourceDefinition* _resolvedSourceDefinition;

}

@property (retain) NUSourceDefinition * resolvedSourceDefinition;              //@synthesize resolvedSourceDefinition=_resolvedSourceDefinition - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)sourceDefinition:(out id*)arg1 ;
-(NUSourceDefinition *)resolvedSourceDefinition;
-(void)setResolvedSourceDefinition:(NUSourceDefinition *)arg1 ;
@end

