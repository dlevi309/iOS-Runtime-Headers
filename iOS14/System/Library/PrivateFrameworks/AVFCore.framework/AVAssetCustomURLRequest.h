/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class NSURLSessionTaskMetrics;

@interface AVAssetCustomURLRequest : NSObject {

	unsigned long long _requestID;
	CFDictionaryRef _customURLRequest;
	CFDictionaryRef _customURLResponse;
	NSURLSessionTaskMetrics* _metrics;

}

@property (nonatomic,readonly) unsigned long long requestID;                 //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,retain) NSURLSessionTaskMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
+(id)requestWithRequest:(CFDictionaryRef)arg1 id:(unsigned long long)arg2 ;
-(void)setMetrics:(NSURLSessionTaskMetrics *)arg1 ;
-(NSURLSessionTaskMetrics *)metrics;
-(id)init;
-(id)initWithRequest:(CFDictionaryRef)arg1 id:(unsigned long long)arg2 ;
-(CFDictionaryRef)customURLRequest;
-(void)setCustomURLRequest:(CFDictionaryRef)arg1 ;
-(CFDictionaryRef)customURLResponse;
-(void)setCustomURLResponse:(CFDictionaryRef)arg1 ;
-(unsigned long long)requestID;
-(void)dealloc;
@end

