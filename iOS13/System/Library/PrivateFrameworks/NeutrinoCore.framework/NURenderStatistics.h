/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)dependencies;
-(double)duration;
-(double)latency;
-(double)responseTime;
-(double)requestTime;
-(double)totalDuration;
-(double)completeDuration;
-(double)prepareDuration;
-(double)prepareLatency;
-(double)renderLatency;
-(double)renderDuration;
-(double)completeLatency;
-(double)replyLatency;

@end

