/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsCore/FCOperation.h>

@protocol FCReadonlyPersonalizationAggregateStore;
@class FCPersonalizationTreatment, NSArray, NSDictionary;

@interface NTPersonalizationFeatureCTRLookupOperation : FCOperation {

	id<FCReadonlyPersonalizationAggregateStore> _aggregateStore;
	FCPersonalizationTreatment* _personalizationTreatment;
	NSArray* _lookupRequests;
	/*^block*/id _lookupCompletion;
	NSDictionary* _result;

}

@property (nonatomic,copy) NSDictionary * result;                                                     //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) id<FCReadonlyPersonalizationAggregateStore> aggregateStore;              //@synthesize aggregateStore=_aggregateStore - In the implementation block
@property (nonatomic,copy) FCPersonalizationTreatment * personalizationTreatment;                     //@synthesize personalizationTreatment=_personalizationTreatment - In the implementation block
@property (nonatomic,copy) NSArray * lookupRequests;                                                  //@synthesize lookupRequests=_lookupRequests - In the implementation block
@property (nonatomic,copy) id lookupCompletion;                                                       //@synthesize lookupCompletion=_lookupCompletion - In the implementation block
-(BOOL)validateOperation;
-(void)setResult:(NSDictionary *)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(id)init;
-(FCPersonalizationTreatment *)personalizationTreatment;
-(NSDictionary *)result;
-(void)setPersonalizationTreatment:(FCPersonalizationTreatment *)arg1 ;
-(NSArray *)lookupRequests;
-(id)lookupCompletion;
-(id<FCReadonlyPersonalizationAggregateStore>)aggregateStore;
-(void)setAggregateStore:(id<FCReadonlyPersonalizationAggregateStore>)arg1 ;
-(void)setLookupRequests:(NSArray *)arg1 ;
-(void)setLookupCompletion:(id)arg1 ;
@end

