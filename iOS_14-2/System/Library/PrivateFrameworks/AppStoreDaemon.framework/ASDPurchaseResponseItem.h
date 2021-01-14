/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, ASDPurchase, NSString, NSArray, NSDictionary;

@interface ASDPurchaseResponseItem : NSObject <NSSecureCoding> {

	BOOL _success;
	BOOL _cancelsPurchaseBatch;
	NSError* _error;
	ASDPurchase* _purchase;
	NSString* _bundleID;
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
@property (nonatomic,copy,readonly) NSString * bundleID;                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSArray * results;                           //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) BOOL success;                                //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL cancelsPurchaseBatch;                   //@synthesize cancelsPurchaseBatch=_cancelsPurchaseBatch - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)responseEndTime;
-(BOOL)success;
-(NSArray *)results;
-(id)init;
-(ASDPurchase *)purchase;
-(void)setResponseStartTime:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setBundleID:(id)arg1 ;
-(void)_setPurchase:(id)arg1 ;
-(void)_setResponseMetrics:(id)arg1 ;
-(void)_setSuccess:(BOOL)arg1 ;
-(void)_setTransactionIDs:(id)arg1 ;
-(NSDictionary *)transationIDs;
-(double)responseStartTime;
-(void)_setError:(id)arg1 ;
-(NSError *)error;
-(id)description;
-(void)setRequestStartTime:(double)arg1 ;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(void)setResponseEndTime:(double)arg1 ;
-(double)requestStartTime;
-(BOOL)cancelsPurchaseBatch;
-(NSDictionary *)responseMetrics;
-(id)transactionIdentifierForItemIdentifier:(long long)arg1 ;
-(id)initWithResults:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

