/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNFeaturePrintObservation.h>

@class NSArray, NSString;

@interface VNSceneObservation : VNFeaturePrintObservation {

	NSArray* _sceneprints;
	NSString* _sceneprintVersion;

}

@property (nonatomic,readonly) NSArray * sceneprints;                          //@synthesize sceneprints=_sceneprints - In the implementation block
@property (nonatomic,copy,readonly) NSString * sceneprintVersion;              //@synthesize sceneprintVersion=_sceneprintVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sceneprintCurrentVersion;
+(id)observationWithSceneprints:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)data;
-(unsigned long long)elementType;
-(unsigned long long)elementCount;
-(id)initWithRequestRevision:(unsigned long long)arg1 sceneprints:(id)arg2 ;
-(NSArray *)sceneprints;
-(NSString *)sceneprintVersion;
@end

