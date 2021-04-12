/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface SKUIMetricsRequestInfo : NSObject <NSCopying> {

	BOOL _responseWasCached;
	BOOL _hasResponseWasCachedValue;
	double _requestStartTime;
	double _responseStartTime;
	double _responseEndTime;

}

@property (assign,nonatomic) BOOL hasResponseWasCachedValue;                         //@synthesize hasResponseWasCachedValue=_hasResponseWasCachedValue - In the implementation block
@property (assign,nonatomic) double requestStartTime;                                //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (assign,nonatomic) double responseStartTime;                               //@synthesize responseStartTime=_responseStartTime - In the implementation block
@property (assign,nonatomic) double responseEndTime;                                 //@synthesize responseEndTime=_responseEndTime - In the implementation block
@property (assign,nonatomic) BOOL responseWasCached;                                 //@synthesize responseWasCached=_responseWasCached - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setResponseEndTime:(double)arg1 ;
-(double)responseEndTime;
-(double)requestStartTime;
-(void)setRequestStartTime:(double)arg1 ;
-(void)setResponseStartTime:(double)arg1 ;
-(double)responseStartTime;
-(BOOL)responseWasCached;
-(void)setResponseWasCached:(BOOL)arg1 ;
-(id)initWithReportRequestTimesMessagePayload:(id)arg1 ;
-(BOOL)hasResponseWasCachedValue;
-(void)setHasResponseWasCachedValue:(BOOL)arg1 ;
@end

