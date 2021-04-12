/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSFormAutoFillCorrectionsStore;
@interface WBSFormAutoFillParsecCrowdsourcedCorrectionsProcessor : NSObject {

	id<WBSFormAutoFillCorrectionsStore> _correctionsStore;

}
+(id)_schemaWithExpectedClass:(Class)arg1 errorCode:(long long)arg2 isOptional:(BOOL)arg3 ;
+(id)_correctionsSchema;
+(id)test_correctionsSchema;
-(id)initWithCorrectionsStore:(id)arg1 ;
-(void)getLastCorrectionsRetrievalURLStringWithResultHandler:(/*^block*/id)arg1 ;
-(void)setCorrectionsWithJSONData:(id)arg1 retrievalURLString:(id)arg2 ;
@end

