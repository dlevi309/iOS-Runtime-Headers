/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

