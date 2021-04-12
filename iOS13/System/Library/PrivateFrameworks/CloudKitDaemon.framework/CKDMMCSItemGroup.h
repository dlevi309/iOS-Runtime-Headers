/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)owner;
-(id<MMCSOperationMetric>)metrics;
-(NSArray *)items;
-(BOOL)complete;
-(void)setMetrics:(id<MMCSOperationMetric>)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(id)CKPropertiesDescription;
-(NSURL *)contentBaseURL;
-(NSString *)requestor;
-(CKAssetDownloadPreauthorization *)downloadPreauthorization;
-(NSData *)authPutRequest;
-(void)setAuthPutRequest:(NSData *)arg1 ;
-(NSArray *)tuple;
-(id)initWithTuple:(id)arg1 ;
-(void)setTuple:(NSArray *)arg1 ;
@end

