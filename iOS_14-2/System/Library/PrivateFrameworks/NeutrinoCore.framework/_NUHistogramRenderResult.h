/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUHistogramRenderResult.h>

@class NUImageHistogram, NSString;

@interface _NUHistogramRenderResult : _NURenderResult <NUHistogramRenderResult> {

	NUImageHistogram* _histogram;

}

@property (readonly) NUImageHistogram * histogram;                   //@synthesize histogram=_histogram - In the implementation block
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NUImageHistogram *)histogram;
-(id)initWithHistogram:(id)arg1 ;
@end

