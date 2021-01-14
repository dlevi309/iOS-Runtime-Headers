/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/


@class NSUUID, NSString, DESRecordStore, NSMutableArray, ADVector, NSDictionary;

@interface ADDESRecordHandler : NSObject {

	BOOL _shouldMakeRecord;
	BOOL _writingInProgress;
	BOOL _hasBeenTapped;
	BOOL _hasBeenImpressed;
	NSUUID* _recordIdentifier;
	NSString* _requestID;
	DESRecordStore* _recordStore;
	NSMutableArray* _postWriteOperations;
	NSString* _adamID;
	ADVector* _appVector;
	double _pTTR;
	NSString* _obfuscationID;
	NSDictionary* _usageVectors;
	NSString* _addendum;

}

@property (nonatomic,retain) DESRecordStore * recordStore;                      //@synthesize recordStore=_recordStore - In the implementation block
@property (nonatomic,retain) NSUUID * recordIdentifier;                         //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldMakeRecord;                             //@synthesize shouldMakeRecord=_shouldMakeRecord - In the implementation block
@property (nonatomic,retain) NSString * requestID;                              //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,retain) NSMutableArray * postWriteOperations;              //@synthesize postWriteOperations=_postWriteOperations - In the implementation block
@property (assign) BOOL writingInProgress;                                      //@synthesize writingInProgress=_writingInProgress - In the implementation block
@property (assign,nonatomic) BOOL hasBeenTapped;                                //@synthesize hasBeenTapped=_hasBeenTapped - In the implementation block
@property (assign,nonatomic) BOOL hasBeenImpressed;                             //@synthesize hasBeenImpressed=_hasBeenImpressed - In the implementation block
@property (nonatomic,retain) NSString * adamID;                                 //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,retain) ADVector * appVector;                              //@synthesize appVector=_appVector - In the implementation block
@property (assign,nonatomic) double pTTR;                                       //@synthesize pTTR=_pTTR - In the implementation block
@property (nonatomic,retain) NSString * obfuscationID;                          //@synthesize obfuscationID=_obfuscationID - In the implementation block
@property (nonatomic,retain) NSDictionary * usageVectors;                       //@synthesize usageVectors=_usageVectors - In the implementation block
@property (nonatomic,retain) NSString * addendum;                               //@synthesize addendum=_addendum - In the implementation block
-(NSUUID *)recordIdentifier;
-(double)pTTR;
-(void)addTap;
-(DESRecordStore *)recordStore;
-(NSString *)requestID;
-(void)setAdamID:(NSString *)arg1 ;
-(NSString *)adamID;
-(BOOL)shouldMakeRecord;
-(void)setRequestID:(NSString *)arg1 ;
-(id)initWithRequestID:(id)arg1 ;
-(id)recordData;
-(NSString *)addendum;
-(void)setPTTR:(double)arg1 ;
-(void)writeDESRecord;
-(void)setRecordIdentifier:(NSUUID *)arg1 ;
-(void)setObfuscationID:(NSString *)arg1 ;
-(void)setAddendum:(NSString *)arg1 ;
-(NSString *)obfuscationID;
-(void)addImpression;
-(ADVector *)appVector;
-(void)setAppVector:(ADVector *)arg1 ;
-(NSDictionary *)usageVectors;
-(void)setUsageVectors:(NSDictionary *)arg1 ;
-(void)updateAdData:(id)arg1 ;
-(void)addImpressionRequiringSave:(BOOL)arg1 ;
-(void)addTapRequringSave:(BOOL)arg1 ;
-(void)performAfterWrite:(/*^block*/id)arg1 ;
-(void)setRecordStore:(DESRecordStore *)arg1 ;
-(void)setShouldMakeRecord:(BOOL)arg1 ;
-(NSMutableArray *)postWriteOperations;
-(void)setPostWriteOperations:(NSMutableArray *)arg1 ;
-(BOOL)writingInProgress;
-(void)setWritingInProgress:(BOOL)arg1 ;
-(BOOL)hasBeenTapped;
-(void)setHasBeenTapped:(BOOL)arg1 ;
-(BOOL)hasBeenImpressed;
-(void)setHasBeenImpressed:(BOOL)arg1 ;
@end

