/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol MMCSOperationMetric;
@class NSMutableArray, NSError, NSData, NSArray, NSURL, NSString, CKAssetDownloadPreauthorization;

@interface CKDMMCSItemGroup : NSObject {

	NSMutableArray* _items;
	BOOL _complete;
	NSError* _error;
	id<MMCSOperationMetric> _metrics;
	NSData* _authPutRequest;
	NSArray* _tuple;

}

@property (nonatomic,retain) NSArray * tuple;                                                           //@synthesize tuple=_tuple - In the implementation block
@property (nonatomic,readonly) NSURL * contentBaseURL; 
@property (nonatomic,readonly) NSString * owner; 
@property (nonatomic,readonly) NSString * requestor; 
@property (nonatomic,retain) NSError * error;                                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) CKAssetDownloadPreauthorization * downloadPreauthorization; 
@property (assign,nonatomic) BOOL complete;                                                             //@synthesize complete=_complete - In the implementation block
@property (nonatomic,retain) id<MMCSOperationMetric> metrics;                                           //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) NSData * authPutRequest;                                                   //@synthesize authPutRequest=_authPutRequest - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                                         //@synthesize items=_items - In the implementation block
+(id)tupleForItem:(id)arg1 ;
-(void)setMetrics:(id<MMCSOperationMetric>)arg1 ;
-(void)addItem:(id)arg1 ;
-(id<MMCSOperationMetric>)metrics;
-(NSURL *)contentBaseURL;
-(CKAssetDownloadPreauthorization *)downloadPreauthorization;
-(NSString *)owner;
-(id)CKPropertiesDescription;
-(NSArray *)tuple;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSArray *)items;
-(id)description;
-(BOOL)complete;
-(void)setComplete:(BOOL)arg1 ;
-(NSString *)requestor;
-(NSData *)authPutRequest;
-(void)setAuthPutRequest:(NSData *)arg1 ;
-(id)initWithTuple:(id)arg1 ;
-(void)setTuple:(NSArray *)arg1 ;
@end

