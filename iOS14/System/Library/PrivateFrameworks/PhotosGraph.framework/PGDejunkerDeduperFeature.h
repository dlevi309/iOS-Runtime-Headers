/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface PGDejunkerDeduperFeature : NSObject <NSCopying> {

	BOOL _isVideo;
	NSSet* _personLocalIdentifiers;
	NSSet* _peopleScenes;

}

@property (readonly) BOOL hasPersons; 
@property (readonly) BOOL hasPeopleScenes; 
@property (readonly) BOOL isVideo;                                //@synthesize isVideo=_isVideo - In the implementation block
@property (readonly) NSSet * personLocalIdentifiers;              //@synthesize personLocalIdentifiers=_personLocalIdentifiers - In the implementation block
@property (readonly) NSSet * peopleScenes;                        //@synthesize peopleScenes=_peopleScenes - In the implementation block
-(id)description;
-(NSSet *)personLocalIdentifiers;
-(BOOL)isVideo;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPersonLocalIdentifiers:(id)arg1 peopleScenes:(id)arg2 isVideo:(BOOL)arg3 ;
-(long long)identicalSimilarity;
-(BOOL)hasPersons;
-(BOOL)hasPeopleScenes;
-(NSSet *)peopleScenes;
@end

