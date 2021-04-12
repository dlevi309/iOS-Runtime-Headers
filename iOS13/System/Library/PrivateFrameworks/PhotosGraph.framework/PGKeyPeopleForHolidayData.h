/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSMutableSet, PGGraphNode, PGGraphPersonNode, NSString;

@interface PGKeyPeopleForHolidayData : NSObject {

	NSMutableSet* _holidayRules;
	PGGraphNode* _socialGroupNode;
	PGGraphPersonNode* _personNode;
	NSMutableSet* _momentNodes;

}

@property (nonatomic,retain) NSMutableSet * holidayRules;                 //@synthesize holidayRules=_holidayRules - In the implementation block
@property (nonatomic,retain) PGGraphNode * socialGroupNode;               //@synthesize socialGroupNode=_socialGroupNode - In the implementation block
@property (nonatomic,retain) PGGraphPersonNode * personNode;              //@synthesize personNode=_personNode - In the implementation block
@property (nonatomic,retain) NSMutableSet * momentNodes;                  //@synthesize momentNodes=_momentNodes - In the implementation block
@property (readonly) double score; 
@property (readonly) NSString * uuid; 
-(id)init;
-(NSString *)uuid;
-(double)score;
-(NSMutableSet *)momentNodes;
-(PGGraphPersonNode *)personNode;
-(void)setMomentNodes:(NSMutableSet *)arg1 ;
-(PGGraphNode *)socialGroupNode;
-(id)initWithSocialGroupNode:(id)arg1 ;
-(id)initWithPersonNode:(id)arg1 ;
-(NSMutableSet *)holidayRules;
-(void)setHolidayRules:(NSMutableSet *)arg1 ;
-(void)setSocialGroupNode:(PGGraphNode *)arg1 ;
-(void)setPersonNode:(PGGraphPersonNode *)arg1 ;
@end

