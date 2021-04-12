/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSMutableArray *)results;
-(id)dictionaryRepresentation;
-(void)setResults:(NSMutableArray *)arg1 ;
-(NSNumber *)tap;
-(void)setImpression:(NSNumber *)arg1 ;
-(NSNumber *)impression;
-(NSString *)experimentID;
-(void)setExperimentID:(NSString *)arg1 ;
-(void)setTap:(NSNumber *)arg1 ;
-(NSString *)appVectorVersion;
-(void)setAddendum:(NSString *)arg1 ;
-(NSString *)addendum;
-(NSString *)responseObfuscationID;
-(id)initWithExperimentID:(id)arg1 ;
-(void)addPrediction:(id)arg1 forTestWeights:(id)arg2 andLookbackPeriod:(id)arg3 ;
-(void)setAppVectorVersion:(NSString *)arg1 ;
-(void)setResponseObfuscationID:(NSString *)arg1 ;
@end

