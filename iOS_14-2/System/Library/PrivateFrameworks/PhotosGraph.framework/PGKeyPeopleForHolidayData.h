/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSMutableSet, PGGraphSocialGroupNode, PGGraphPersonNode, NSString;

@interface PGKeyPeopleForHolidayData : NSObject {

	NSMutableSet* _holidayRules;
	PGGraphSocialGroupNode* _socialGroupNode;
	PGGraphPersonNode* _personNode;
	NSMutableSet* _momentNodes;

}

@property (nonatomic,retain) NSMutableSet * holidayRules;                           //@synthesize holidayRules=_holidayRules - In the implementation block
@property (nonatomic,retain) PGGraphSocialGroupNode * socialGroupNode;              //@synthesize socialGroupNode=_socialGroupNode - In the implementation block
@property (nonatomic,retain) PGGraphPersonNode * personNode;                        //@synthesize personNode=_personNode - In the implementation block
@property (nonatomic,retain) NSMutableSet * momentNodes;                            //@synthesize momentNodes=_momentNodes - In the implementation block
@property (readonly) double score; 
@property (readonly) NSString * uuid; 
-(NSString *)uuid;
-(id)init;
-(double)score;
-(NSMutableSet *)momentNodes;
-(void)setMomentNodes:(NSMutableSet *)arg1 ;
-(PGGraphPersonNode *)personNode;
-(void)setPersonNode:(PGGraphPersonNode *)arg1 ;
-(PGGraphSocialGroupNode *)socialGroupNode;
-(id)initWithSocialGroupNode:(id)arg1 ;
-(id)initWithPersonNode:(id)arg1 ;
-(NSMutableSet *)holidayRules;
-(void)setHolidayRules:(NSMutableSet *)arg1 ;
-(void)setSocialGroupNode:(PGGraphSocialGroupNode *)arg1 ;
@end

