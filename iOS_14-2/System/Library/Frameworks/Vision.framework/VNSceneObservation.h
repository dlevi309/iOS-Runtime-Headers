/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)elementType;
-(unsigned long long)elementCount;
-(id)data;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)sceneprints;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 sceneprints:(id)arg2 ;
-(NSString *)sceneprintVersion;
@end

