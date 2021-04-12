/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class CLSPerson, NSString, NSArray, NSDate;

@interface PGPotentialRecentPersonCentricSuggestion : NSObject {

	CLSPerson* _person;
	NSString* _personLocalIdentifier;
	NSArray* _assets;
	NSDate* _notSeenSinceDate;

}

@property (nonatomic,readonly) CLSPerson * person;                                //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) NSString * personLocalIdentifier;                  //@synthesize personLocalIdentifier=_personLocalIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * assets;                                  //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) NSDate * notSeenSinceDate;                         //@synthesize notSeenSinceDate=_notSeenSinceDate - In the implementation block
@property (nonatomic,readonly) unsigned long long relationshipScore; 
-(NSArray *)assets;
-(NSString *)personLocalIdentifier;
-(CLSPerson *)person;
-(NSDate *)notSeenSinceDate;
-(id)initWithCLSPerson:(id)arg1 assets:(id)arg2 ;
-(id)initWithPersonLocalIdentifier:(id)arg1 assets:(id)arg2 notSeenSinceDate:(id)arg3 ;
-(unsigned long long)relationshipScore;
@end

