/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSSet, NSMutableSet;

@interface PGHobby : NSObject {

	long long _type;
	NSSet* _personNodes;
	NSMutableSet* _momentNodes;

}

@property (assign,nonatomic) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSSet * personNodes;                     //@synthesize personNodes=_personNodes - In the implementation block
@property (nonatomic,retain) NSMutableSet * momentNodes;              //@synthesize momentNodes=_momentNodes - In the implementation block
-(void)setType:(long long)arg1 ;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(NSMutableSet *)momentNodes;
-(NSSet *)personNodes;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMomentNodes:(NSMutableSet *)arg1 ;
-(void)setPersonNodes:(NSSet *)arg1 ;
@end

