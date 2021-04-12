/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(GKListNode *)nextNode;
-(void)setNextNode:(GKListNode *)arg1 ;
-(GKListNode *)prevNode;
-(void)setPrevNode:(GKListNode *)arg1 ;
@end

