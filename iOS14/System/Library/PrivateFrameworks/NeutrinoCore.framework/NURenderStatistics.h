/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class NSArray;


@protocol NURenderStatistics <NSObject>
@property (readonly) double latency; 
@property (readonly) double duration; 
@property (readonly) double totalDuration; 
@property (readonly) double prepareLatency; 
@property (readonly) double prepareDuration; 
@property (readonly) double renderLatency; 
@property (readonly) double renderDuration; 
@property (readonly) double completeLatency; 
@property (readonly) double completeDuration; 
@property (readonly) double replyLatency; 
@property (readonly) double requestTime; 
@property (readonly) double responseTime; 
@property (copy,readonly) NSArray * dependencies; 
@required
-(double)totalDuration;
-(double)completeDuration;
-(double)prepareDuration;
-(NSArray *)dependencies;
-(double)latency;
-(double)requestTime;
-(double)responseTime;
-(double)duration;
-(double)prepareLatency;
-(double)renderLatency;
-(double)renderDuration;
-(double)completeLatency;
-(double)replyLatency;

@end

