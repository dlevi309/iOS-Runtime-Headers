/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsCore/FCOperation.h>

@protocol FCReadonlyPersonalizationAggregateStore;
@class FCPersonalizationTreatment, NSArray, NSDictionary;

@interface NTSectionPresencePersonalizationOperation : FCOperation {

	id<FCReadonlyPersonalizationAggregateStore> _aggregateStore;
	FCPersonalizationTreatment* _personalizationTreatment;
	NSArray* _absoluteRequests;
	NSArray* _relativeRequests;
	/*^block*/id _personalizationCompletion;
	NSDictionary* _result;

}

@property (nonatomic,copy) NSDictionary * result;                                                     //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) id<FCReadonlyPersonalizationAggregateStore> aggregateStore;              //@synthesize aggregateStore=_aggregateStore - In the implementation block
@property (nonatomic,copy) FCPersonalizationTreatment * personalizationTreatment;                     //@synthesize personalizationTreatment=_personalizationTreatment - In the implementation block
@property (nonatomic,copy) NSArray * absoluteRequests;                                                //@synthesize absoluteRequests=_absoluteRequests - In the implementation block
@property (nonatomic,copy) NSArray * relativeRequests;                                                //@synthesize relativeRequests=_relativeRequests - In the implementation block
@property (nonatomic,copy) id personalizationCompletion;                                              //@synthesize personalizationCompletion=_personalizationCompletion - In the implementation block
-(id)init;
-(NSDictionary *)result;
-(void)setResult:(NSDictionary *)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(FCPersonalizationTreatment *)personalizationTreatment;
-(void)setPersonalizationTreatment:(FCPersonalizationTreatment *)arg1 ;
-(id<FCReadonlyPersonalizationAggregateStore>)aggregateStore;
-(void)setAggregateStore:(id<FCReadonlyPersonalizationAggregateStore>)arg1 ;
-(void)setRelativeRequests:(NSArray *)arg1 ;
-(void)setAbsoluteRequests:(NSArray *)arg1 ;
-(void)setPersonalizationCompletion:(id)arg1 ;
-(NSArray *)absoluteRequests;
-(NSArray *)relativeRequests;
-(id)personalizationCompletion;
@end

