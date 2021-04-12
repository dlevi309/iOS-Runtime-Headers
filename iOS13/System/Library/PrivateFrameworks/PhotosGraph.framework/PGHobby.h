/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSSet, NSMutableSet;

@interface PGHobby : NSObject {

	long long _type;
	NSSet* _persons;
	NSMutableSet* _momentNodes;

}

@property (assign,nonatomic) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSSet * persons;                     //@synthesize persons=_persons - In the implementation block
@property (nonatomic,retain) NSMutableSet * moments;              //@synthesize momentNodes=_momentNodes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSMutableSet *)moments;
-(void)setMoments:(NSMutableSet *)arg1 ;
-(NSSet *)persons;
-(void)setPersons:(NSSet *)arg1 ;
@end

