/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/


@class AFBulletin;

@interface SASBulletinCacheNode : NSObject {

	AFBulletin* _bulletin;
	SASBulletinCacheNode* _previousNode;
	SASBulletinCacheNode* _nextNode;

}

@property (nonatomic,retain) AFBulletin * bulletin;                            //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,retain) SASBulletinCacheNode * previousNode;              //@synthesize previousNode=_previousNode - In the implementation block
@property (nonatomic,retain) SASBulletinCacheNode * nextNode;                  //@synthesize nextNode=_nextNode - In the implementation block
-(SASBulletinCacheNode *)nextNode;
-(SASBulletinCacheNode *)previousNode;
-(void)setBulletin:(AFBulletin *)arg1 ;
-(AFBulletin *)bulletin;
-(void)setPreviousNode:(SASBulletinCacheNode *)arg1 ;
-(void)setNextNode:(SASBulletinCacheNode *)arg1 ;
@end

