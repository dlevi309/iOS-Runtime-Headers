/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PGGraphMomentNode *)momentNode;
-(NSString *)momentLocalIdentifier;
-(id)description;
-(unsigned long long)updateTypes;
-(unsigned long long)type;
-(id)initWithMomentLocalIdentifier:(id)arg1 updateTypes:(unsigned long long)arg2 ;
-(void)setMomentNode:(PGGraphMomentNode *)arg1 ;
-(void)mergeChange:(id)arg1 ;
@end

