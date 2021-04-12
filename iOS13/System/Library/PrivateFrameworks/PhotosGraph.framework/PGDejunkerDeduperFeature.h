/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isVideo;
-(NSSet *)personLocalIdentifiers;
-(id)initWithPersonLocalIdentifiers:(id)arg1 peopleScenes:(id)arg2 isVideo:(BOOL)arg3 ;
-(long long)identicalSimilarity;
-(BOOL)hasPersons;
-(BOOL)hasPeopleScenes;
-(NSSet *)peopleScenes;
@end

