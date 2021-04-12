/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class CLSPersonIdentity;

@interface CLSPersonIdentityResult : NSObject {

	float _confidence;
	CLSPersonIdentity* _person;

}

@property (nonatomic,retain) CLSPersonIdentity * person;              //@synthesize person=_person - In the implementation block
@property (assign,nonatomic) float confidence;                        //@synthesize confidence=_confidence - In the implementation block
+(id)personResultWithPerson:(id)arg1 andConfidence:(float)arg2 ;
-(CLSPersonIdentity *)person;
-(float)confidence;
-(id)description;
-(void)setConfidence:(float)arg1 ;
-(void)setPerson:(CLSPersonIdentity *)arg1 ;
-(void)mergeWithResult:(id)arg1 ;
-(BOOL)isSamePersonAsResult:(id)arg1 ;
@end

