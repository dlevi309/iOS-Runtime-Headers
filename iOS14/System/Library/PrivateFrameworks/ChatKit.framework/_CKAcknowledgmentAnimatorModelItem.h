/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class CKEntity, NSIndexPath;

@interface _CKAcknowledgmentAnimatorModelItem : NSObject {

	CKEntity* _entity;
	NSIndexPath* _indexPath;
	long long _ackVoteCount;
	long long _acknowledgmentType;

}

@property (nonatomic,retain) CKEntity * entity;                         //@synthesize entity=_entity - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                   //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) long long ackVoteCount;                    //@synthesize ackVoteCount=_ackVoteCount - In the implementation block
@property (assign,nonatomic) long long acknowledgmentType;              //@synthesize acknowledgmentType=_acknowledgmentType - In the implementation block
-(void)setEntity:(CKEntity *)arg1 ;
-(CKEntity *)entity;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)indexPath;
-(long long)ackVoteCount;
-(long long)acknowledgmentType;
-(void)setAcknowledgmentType:(long long)arg1 ;
-(void)setAckVoteCount:(long long)arg1 ;
@end

