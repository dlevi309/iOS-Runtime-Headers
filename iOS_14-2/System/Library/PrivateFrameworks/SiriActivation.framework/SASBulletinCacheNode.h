/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(AFBulletin *)bulletin;
-(void)setBulletin:(AFBulletin *)arg1 ;
-(SASBulletinCacheNode *)previousNode;
-(void)setNextNode:(SASBulletinCacheNode *)arg1 ;
-(void)setPreviousNode:(SASBulletinCacheNode *)arg1 ;
@end

