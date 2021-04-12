/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/


@class NSString, NSDictionary, NSDate;

@interface TPSEventProviderResult : NSObject {

	NSString* _identifier;
	NSDictionary* _observationMap;
	NSDate* _resultDate;

}

@property (nonatomic,copy) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * observationMap;              //@synthesize observationMap=_observationMap - In the implementation block
@property (nonatomic,retain) NSDate * resultDate;                      //@synthesize resultDate=_resultDate - In the implementation block
-(id)debugDescription;
-(void)setResultDate:(NSDate *)arg1 ;
-(void)setObservationMap:(NSDictionary *)arg1 ;
-(NSDate *)resultDate;
-(NSDictionary *)observationMap;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
@end

