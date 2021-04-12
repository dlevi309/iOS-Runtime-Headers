/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSURLSessionTaskMetrics, NSString;

@interface VaryHeaderSupportTaskDelegate : NSObject <NSURLSessionTaskDelegate> {

	NSURLSessionTaskMetrics* _metrics;

}

@property (nonatomic,retain) NSURLSessionTaskMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSURLSessionTaskMetrics *)metrics;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)setMetrics:(NSURLSessionTaskMetrics *)arg1 ;
@end

