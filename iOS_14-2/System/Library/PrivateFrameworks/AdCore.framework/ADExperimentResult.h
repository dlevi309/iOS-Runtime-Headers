/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/


@class NSString, NSMutableArray, NSNumber;

@interface ADExperimentResult : NSObject {

	NSString* _experimentID;
	NSString* _appVectorVersion;
	NSString* _responseObfuscationID;
	NSMutableArray* _results;
	NSNumber* _impression;
	NSNumber* _tap;
	NSString* _addendum;

}

@property (nonatomic,retain) NSString * experimentID;                       //@synthesize experimentID=_experimentID - In the implementation block
@property (nonatomic,retain) NSString * appVectorVersion;                   //@synthesize appVectorVersion=_appVectorVersion - In the implementation block
@property (nonatomic,retain) NSString * responseObfuscationID;              //@synthesize responseObfuscationID=_responseObfuscationID - In the implementation block
@property (nonatomic,retain) NSMutableArray * results;                      //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSNumber * impression;                         //@synthesize impression=_impression - In the implementation block
@property (nonatomic,retain) NSNumber * tap;                                //@synthesize tap=_tap - In the implementation block
@property (nonatomic,retain) NSString * addendum;                           //@synthesize addendum=_addendum - In the implementation block
-(NSNumber *)tap;
-(void)setResults:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)results;
-(void)setExperimentID:(NSString *)arg1 ;
-(void)setTap:(NSNumber *)arg1 ;
-(void)setImpression:(NSNumber *)arg1 ;
-(NSNumber *)impression;
-(NSString *)addendum;
-(NSString *)experimentID;
-(void)setAddendum:(NSString *)arg1 ;
-(NSString *)appVectorVersion;
-(NSString *)responseObfuscationID;
-(id)initWithExperimentID:(id)arg1 ;
-(void)addPrediction:(id)arg1 forTestWeights:(id)arg2 andLookbackPeriod:(id)arg3 ;
-(void)setAppVectorVersion:(NSString *)arg1 ;
-(void)setResponseObfuscationID:(NSString *)arg1 ;
@end

