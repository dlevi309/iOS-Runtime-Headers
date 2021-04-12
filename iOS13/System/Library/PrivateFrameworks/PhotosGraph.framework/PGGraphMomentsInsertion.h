/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphMomentsInsertion : PGGraphChange {

	NSSet* _momentLocalIdentifiers;
	NSSet* _moments;

}

@property (nonatomic,readonly) NSSet * momentLocalIdentifiers;              //@synthesize momentLocalIdentifiers=_momentLocalIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * moments;                             //@synthesize moments=_moments - In the implementation block
-(id)description;
-(unsigned long long)type;
-(unsigned long long)changeCount;
-(NSSet *)moments;
-(id)initWithMoments:(id)arg1 ;
-(NSSet *)momentLocalIdentifiers;
-(id)initWithMomentLocalIdentifiers:(id)arg1 ;
@end

