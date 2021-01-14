/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolNetworkResourceTiming : RWIProtocolJSONObject

@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double redirectStart; 
@property (assign,nonatomic) double redirectEnd; 
@property (assign,nonatomic) double fetchStart; 
@property (assign,nonatomic) double domainLookupStart; 
@property (assign,nonatomic) double domainLookupEnd; 
@property (assign,nonatomic) double connectStart; 
@property (assign,nonatomic) double connectEnd; 
@property (assign,nonatomic) double secureConnectionStart; 
@property (assign,nonatomic) double requestStart; 
@property (assign,nonatomic) double responseStart; 
@property (assign,nonatomic) double responseEnd; 
+(id)safe_initWithStartTime:(double)arg1 redirectStart:(double)arg2 redirectEnd:(double)arg3 fetchStart:(double)arg4 domainLookupStart:(double)arg5 domainLookupEnd:(double)arg6 connectStart:(double)arg7 connectEnd:(double)arg8 secureConnectionStart:(double)arg9 requestStart:(double)arg10 responseStart:(double)arg11 responseEnd:(double)arg12 ;
+(id)ik_networkResourceTimingFromData:(id)arg1 referenceStartDate:(id)arg2 ;
-(double)connectStart;
-(double)fetchStart;
-(void)setConnectStart:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setRequestStart:(double)arg1 ;
-(double)requestStart;
-(double)responseStart;
-(void)setResponseEnd:(double)arg1 ;
-(double)domainLookupEnd;
-(void)setFetchStart:(double)arg1 ;
-(void)setRedirectEnd:(double)arg1 ;
-(void)setResponseStart:(double)arg1 ;
-(double)domainLookupStart;
-(void)setDomainLookupEnd:(double)arg1 ;
-(void)setRedirectStart:(double)arg1 ;
-(double)redirectStart;
-(double)redirectEnd;
-(void)setConnectEnd:(double)arg1 ;
-(void)setDomainLookupStart:(double)arg1 ;
-(double)responseEnd;
-(double)connectEnd;
-(double)startTime;
-(void)setSecureConnectionStart:(double)arg1 ;
-(id)initWithStartTime:(double)arg1 redirectStart:(double)arg2 redirectEnd:(double)arg3 fetchStart:(double)arg4 domainLookupStart:(double)arg5 domainLookupEnd:(double)arg6 connectStart:(double)arg7 connectEnd:(double)arg8 secureConnectionStart:(double)arg9 requestStart:(double)arg10 responseStart:(double)arg11 responseEnd:(double)arg12 ;
-(double)secureConnectionStart;
@end

