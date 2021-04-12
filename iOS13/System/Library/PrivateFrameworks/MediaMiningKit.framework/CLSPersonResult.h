/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class CLSPerson;

@interface CLSPersonResult : NSObject {

	float _confidence;
	CLSPerson* _person;

}

@property (nonatomic,retain) CLSPerson * person;              //@synthesize person=_person - In the implementation block
@property (assign,nonatomic) float confidence;                //@synthesize confidence=_confidence - In the implementation block
+(id)personResultWithPerson:(id)arg1 andConfidence:(float)arg2 ;
-(id)description;
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(CLSPerson *)person;
-(void)setPerson:(CLSPerson *)arg1 ;
-(void)mergeWithResult:(id)arg1 ;
-(BOOL)isSamePersonAsResult:(id)arg1 ;
@end

