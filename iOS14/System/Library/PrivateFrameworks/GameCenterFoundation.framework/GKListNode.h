/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@interface GKListNode : NSObject {

	id _value;
	GKListNode* _prevNode;
	GKListNode* _nextNode;

}

@property (assign,nonatomic) GKListNode * nextNode;              //@synthesize nextNode=_nextNode - In the implementation block
@property (assign,nonatomic) GKListNode * prevNode;              //@synthesize prevNode=_prevNode - In the implementation block
@property (nonatomic,retain) id value;                           //@synthesize value=_value - In the implementation block
-(GKListNode *)nextNode;
-(id)initWithValue:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)description;
-(GKListNode *)prevNode;
-(id)value;
-(void)dealloc;
-(void)setPrevNode:(GKListNode *)arg1 ;
-(void)setNextNode:(GKListNode *)arg1 ;
@end

