/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setRecordIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)recordIdentifier;
-(id)initWithRequestID:(id)arg1 ;
-(NSString *)requestID;
-(NSString *)adamID;
-(void)setAdamID:(NSString *)arg1 ;
-(void)setRequestID:(NSString *)arg1 ;
-(void)writeDESRecord;
-(BOOL)shouldMakeRecord;
-(id)recordData;
-(DESRecordStore *)recordStore;
-(void)setRecordStore:(DESRecordStore *)arg1 ;
-(NSDictionary *)usageVectors;
-(void)setUsageVectors:(NSDictionary *)arg1 ;
-(void)setObfuscationID:(NSString *)arg1 ;
-(void)setAddendum:(NSString *)arg1 ;
-(NSString *)obfuscationID;
-(NSString *)addendum;
-(void)addImpression;
-(void)addTap;
-(ADVector *)appVector;
-(void)setAppVector:(ADVector *)arg1 ;
-(double)pTTR;
-(void)setPTTR:(double)arg1 ;
-(void)updateAdData:(id)arg1 ;
-(void)addImpressionRequiringSave:(BOOL)arg1 ;
-(void)addTapRequringSave:(BOOL)arg1 ;
-(void)performAfterWrite:(/*^block*/id)arg1 ;
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

