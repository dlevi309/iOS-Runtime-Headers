/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class NSArray;

@interface VCPHandObservation : NSObject {

	int _handID;
	int _revision;
	NSArray* _keypoints;

}

@property (nonatomic,retain) NSArray * keypoints;              //@synthesize keypoints=_keypoints - In the implementation block
@property (assign,nonatomic) int handID;                       //@synthesize handID=_handID - In the implementation block
@property (assign,nonatomic) int revision;                     //@synthesize revision=_revision - In the implementation block
-(int)handID;
-(void)setRevision:(int)arg1 ;
-(NSArray *)keypoints;
-(void)setKeypoints:(NSArray *)arg1 ;
-(void)setHandID:(int)arg1 ;
-(int)revision;
@end

