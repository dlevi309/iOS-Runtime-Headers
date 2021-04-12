/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, ASDPurchase, NSArray, NSDictionary;

@interface ASDPurchaseResponseItem : NSObject <NSSecureCoding> {

	BOOL _success;
	BOOL _cancelsPurchaseBatch;
	NSError* _error;
	ASDPurchase* _purchase;
	NSArray* _results;
	double _requestStartTime;
	double _responseEndTime;
	double _responseStartTime;
	NSDictionary* _responseMetrics;
	NSDictionary* _transationIDs;

}

@property (assign,nonatomic) double requestStartTime;                       //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (assign,nonatomic) double responseEndTime;                        //@synthesize responseEndTime=_responseEndTime - In the implementation block
@property (assign,nonatomic) double responseStartTime;                      //@synthesize responseStartTime=_responseStartTime - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseMetrics;              //@synthesize responseMetrics=_responseMetrics - In the implementation block
@property (nonatomic,readonly) NSDictionary * transationIDs;                //@synthesize transationIDs=_transationIDs - In the implementation block
@property (nonatomic,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) ASDPurchase * purchase;                 //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,readonly) NSArray * results;                           //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) BOOL success;                                //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL cancelsPurchaseBatch;                   //@synthesize cancelsPurchaseBatch=_cancelsPurchaseBatch - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(NSArray *)results;
-(void)_setError:(id)arg1 ;
-(BOOL)success;
-(void)setResponseEndTime:(double)arg1 ;
-(double)responseEndTime;
-(double)requestStartTime;
-(void)setRequestStartTime:(double)arg1 ;
-(id)initWithResults:(id)arg1 ;
-(ASDPurchase *)purchase;
-(void)setResponseStartTime:(double)arg1 ;
-(double)responseStartTime;
-(id)transactionIdentifierForItemIdentifier:(long long)arg1 ;
-(NSDictionary *)responseMetrics;
-(BOOL)cancelsPurchaseBatch;
-(void)_setPurchase:(id)arg1 ;
-(void)_setResponseMetrics:(id)arg1 ;
-(void)_setSuccess:(BOOL)arg1 ;
-(void)_setTransactionIDs:(id)arg1 ;
-(NSDictionary *)transationIDs;
@end

