/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class NSArray;

@interface VCPPersonObservation : NSObject {

	float _relativeActionScore;
	float _absoluteActionScore;
	int _personID;
	int _revision;
	NSArray* _keypoints;

}

@property (nonatomic,retain) NSArray * keypoints;                    //@synthesize keypoints=_keypoints - In the implementation block
@property (assign,nonatomic) float relativeActionScore;              //@synthesize relativeActionScore=_relativeActionScore - In the implementation block
@property (assign,nonatomic) float absoluteActionScore;              //@synthesize absoluteActionScore=_absoluteActionScore - In the implementation block
@property (assign,nonatomic) int personID;                           //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) int revision;                           //@synthesize revision=_revision - In the implementation block
-(void)setRevision:(int)arg1 ;
-(NSArray *)keypoints;
-(void)setRelativeActionScore:(float)arg1 ;
-(void)setAbsoluteActionScore:(float)arg1 ;
-(void)setKeypoints:(NSArray *)arg1 ;
-(float)relativeActionScore;
-(float)absoluteActionScore;
-(int)personID;
-(void)setPersonID:(int)arg1 ;
-(int)revision;
@end

