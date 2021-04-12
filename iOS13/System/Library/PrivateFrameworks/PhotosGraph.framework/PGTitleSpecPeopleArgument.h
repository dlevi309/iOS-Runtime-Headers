/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGTitleSpecArgument.h>

@interface PGTitleSpecPeopleArgument : PGTitleSpecArgument {

	unsigned long long _type;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)argumentWithPeopleType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)_resolvedStringWithMomentNodes:(id)arg1 ;
-(id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2 ;
-(id)initWithPeopleType:(unsigned long long)arg1 ;
-(id)_birthdayTitleWithMomentNodes:(id)arg1 ;
-(id)_groupTitleWithMomentNodes:(id)arg1 allowedGroupsFormat:(unsigned long long)arg2 ;
-(id)_groupTitleWithFeature:(id)arg1 graph:(id)arg2 allowedGroupsFormat:(unsigned long long)arg3 ;
-(id)_personTitleWithMomentNodes:(id)arg1 ;
-(id)_personTitleWithFeature:(id)arg1 graph:(id)arg2 ;
-(id)_peopleNodesWithMomentNodes:(id)arg1 ;
@end

