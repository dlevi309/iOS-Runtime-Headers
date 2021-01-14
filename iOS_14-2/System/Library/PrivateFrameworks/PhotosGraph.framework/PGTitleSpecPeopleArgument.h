/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGTitleSpecArgument.h>

@class NSSet;

@interface PGTitleSpecPeopleArgument : PGTitleSpecArgument {

	unsigned long long _type;
	NSSet* _personNodes;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (readonly) NSSet * personNodes;                  //@synthesize personNodes=_personNodes - In the implementation block
+(id)argumentWithPeopleType:(unsigned long long)arg1 ;
+(id)argumentWithPeopleType:(unsigned long long)arg1 personNodes:(id)arg2 ;
-(unsigned long long)type;
-(NSSet *)personNodes;
-(id)_resolvedStringWithMomentNodes:(id)arg1 ;
-(id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2 ;
-(id)_initWithPeopleType:(unsigned long long)arg1 personNodes:(id)arg2 ;
-(id)initWithPeopleType:(unsigned long long)arg1 ;
-(id)_birthdayTitleWithMomentNodes:(id)arg1 ;
-(id)_groupTitleWithMomentNodes:(id)arg1 allowedGroupsFormat:(unsigned long long)arg2 ;
-(id)_groupTitleWithFeature:(id)arg1 graph:(id)arg2 allowedGroupsFormat:(unsigned long long)arg3 ;
-(id)_personTitleWithMomentNodes:(id)arg1 ;
-(id)_personTitleWithFeature:(id)arg1 graph:(id)arg2 ;
-(id)_personNodesWithMomentNodes:(id)arg1 ;
@end

