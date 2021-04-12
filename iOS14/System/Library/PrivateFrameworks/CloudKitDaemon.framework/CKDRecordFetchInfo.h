/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CKRecord *)record;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(NSString *)etag;
-(void)setRecord:(CKRecord *)arg1 ;
-(double)startDate;
-(id)CKPropertiesDescription;
-(void)setEtag:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)description;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(CKRecordID *)recordID;
-(NSObject*<OS_dispatch_source>)recordReadySource;
-(BOOL)ignoreErrors;
-(unsigned long long)fetchOrder;
-(id)initWithAggregator:(id)arg1 ;
-(void)performCallback;
-(void)setFetchOrder:(unsigned long long)arg1 ;
-(void)setRecordReadySource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setIgnoreErrors:(BOOL)arg1 ;
@end

