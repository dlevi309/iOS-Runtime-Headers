/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_source;
@class CKRecordID, NSString, CKRecord, NSError, NSObject;

@interface CKDRecordFetchInfo : NSObject {

	BOOL _ignoreErrors;
	double _startDate;
	unsigned long long _fetchOrder;
	CKRecordID* _recordID;
	NSString* _etag;
	unsigned long long _state;
	CKRecord* _record;
	NSError* _error;
	/*^block*/id _completionBlock;
	NSObject*<OS_dispatch_source> _recordReadySource;

}

@property (assign,nonatomic) unsigned long long fetchOrder;                                //@synthesize fetchOrder=_fetchOrder - In the implementation block
@property (nonatomic,retain) CKRecordID * recordID;                                        //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * etag;                                              //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) double startDate;                                           //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) CKRecord * record;                                            //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id completionBlock;                                             //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> recordReadySource;              //@synthesize recordReadySource=_recordReadySource - In the implementation block
@property (assign,nonatomic) BOOL ignoreErrors;                                            //@synthesize ignoreErrors=_ignoreErrors - In the implementation block
-(id)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(double)startDate;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(unsigned long long)state;
-(NSString *)etag;
-(void)setState:(unsigned long long)arg1 ;
-(CKRecordID *)recordID;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(id)CKPropertiesDescription;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(NSObject*<OS_dispatch_source>)recordReadySource;
-(BOOL)ignoreErrors;
-(unsigned long long)fetchOrder;
-(id)initWithAggregator:(id)arg1 ;
-(void)performCallback;
-(void)setFetchOrder:(unsigned long long)arg1 ;
-(void)setRecordReadySource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setIgnoreErrors:(BOOL)arg1 ;
@end

