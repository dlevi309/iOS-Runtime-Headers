/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphPersonsDeletion : PGGraphChange {

	NSSet* _personLocalIdentifiers;

}

@property (nonatomic,readonly) NSSet * personLocalIdentifiers;              //@synthesize personLocalIdentifiers=_personLocalIdentifiers - In the implementation block
-(id)description;
-(unsigned long long)type;
-(unsigned long long)changeCount;
-(NSSet *)personLocalIdentifiers;
-(id)initWithPersonLocalIdentifiers:(id)arg1 ;
@end

