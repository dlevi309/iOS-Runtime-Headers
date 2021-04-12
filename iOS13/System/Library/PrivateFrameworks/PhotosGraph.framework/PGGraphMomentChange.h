/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphChange.h>

@class NSString, PGGraphMomentNode;

@interface PGGraphMomentChange : PGGraphChange {

	NSString* _momentLocalIdentifier;
	PGGraphMomentNode* _momentNode;
	unsigned long long _updateTypes;

}

@property (nonatomic,readonly) NSString * momentLocalIdentifier;              //@synthesize momentLocalIdentifier=_momentLocalIdentifier - In the implementation block
@property (nonatomic,retain) PGGraphMomentNode * momentNode;                  //@synthesize momentNode=_momentNode - In the implementation block
@property (nonatomic,readonly) unsigned long long updateTypes;                //@synthesize updateTypes=_updateTypes - In the implementation block
-(id)description;
-(unsigned long long)type;
-(id)initWithMomentLocalIdentifier:(id)arg1 updateTypes:(unsigned long long)arg2 ;
-(void)mergeChange:(id)arg1 ;
-(NSString *)momentLocalIdentifier;
-(PGGraphMomentNode *)momentNode;
-(void)setMomentNode:(PGGraphMomentNode *)arg1 ;
-(unsigned long long)updateTypes;
@end

