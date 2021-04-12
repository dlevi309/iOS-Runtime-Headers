/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphPersonsInsertion : PGGraphChange {

	NSSet* _personLocalIdentifiers;
	NSSet* _persons;

}

@property (nonatomic,readonly) NSSet * personLocalIdentifiers;              //@synthesize personLocalIdentifiers=_personLocalIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * persons;                             //@synthesize persons=_persons - In the implementation block
-(unsigned long long)changeCount;
-(NSSet *)persons;
-(id)description;
-(NSSet *)personLocalIdentifiers;
-(unsigned long long)type;
-(id)initWithPersonLocalIdentifiers:(id)arg1 ;
-(id)initWithPersons:(id)arg1 ;
@end

