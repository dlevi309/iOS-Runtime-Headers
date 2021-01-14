/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface SKUIMetricsTemplateLoad : NSObject <NSCopying> {

	BOOL _responseWasCached;
	double _requestStartTime;
	double _responseStartTime;
	double _responseEndTime;

}

@property (assign,nonatomic) double requestStartTime;                                //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (assign,nonatomic) double responseStartTime;                               //@synthesize responseStartTime=_responseStartTime - In the implementation block
@property (assign,nonatomic) double responseEndTime;                                 //@synthesize responseEndTime=_responseEndTime - In the implementation block
@property (assign,nonatomic) BOOL responseWasCached;                                 //@synthesize responseWasCached=_responseWasCached - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
-(double)responseEndTime;
-(NSDictionary *)dictionaryRepresentation;
-(void)setResponseStartTime:(double)arg1 ;
-(double)responseStartTime;
-(void)setRequestStartTime:(double)arg1 ;
-(void)setResponseEndTime:(double)arg1 ;
-(double)requestStartTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)responseWasCached;
-(void)setResponseWasCached:(BOOL)arg1 ;
@end

