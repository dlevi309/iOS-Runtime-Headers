/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/


@class NSString, APPCNativeRepresentation;

@interface APPCPromotedContentInfo : NSObject {

	 promotedContent;
	 metricsHelper;
	 ready;
	 unfilledReason;
	 placeholder;

}

@property (readonly,nonatomic) id<APPCLifecycleMetricsHelping> metricsHelper; 
@property (readonly,nonatomic) id ready; 
@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) APPCNativeRepresentation * nativeInfo; 
@property (readonly,nonatomic) long long desiredPosition; 
@property (readonly,nonatomic) long long errorReason; 
@property (assign,nonatomic) long long unfilledReason; 
@property (assign,nonatomic) BOOL placeholder; 
-(id)ready;
-(id)init;
-(void)setPlaceholder:(BOOL)arg1 ;
-(BOOL)placeholder;
-(NSString *)identifier;
-(void)dealloc;
-(id<APPCLifecycleMetricsHelping>)metricsHelper;
-(long long)desiredPosition;
-(void)setUnfilledReason:(long long)arg1 ;
-(long long)unfilledReason;
-(APPCNativeRepresentation *)nativeInfo;
-(long long)errorReason;
@end

