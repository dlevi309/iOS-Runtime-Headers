/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSFormAutoFillCorrectionsStore;
@interface WBSFormAutoFillParsecCrowdsourcedCorrectionsProcessor : NSObject {

	id<WBSFormAutoFillCorrectionsStore> _correctionsStore;

}
+(id)_correctionsSchema;
+(id)_schemaWithExpectedClass:(Class)arg1 errorCode:(long long)arg2 isOptional:(BOOL)arg3 ;
+(id)test_correctionsSchema;
-(id)initWithCorrectionsStore:(id)arg1 ;
-(void)getLastCorrectionsRetrievalURLStringWithResultHandler:(/*^block*/id)arg1 ;
-(void)setCorrectionsWithJSONData:(id)arg1 retrievalURLString:(id)arg2 ;
@end

