/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUHistogramRenderResult.h>

@class NUImageHistogram, NSString;

@interface _NUHistogramRenderResult : _NURenderResult <NUHistogramRenderResult> {

	NUImageHistogram* _histogram;

}

@property (readonly) NUImageHistogram * histogram;                   //@synthesize histogram=_histogram - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
-(NUImageHistogram *)histogram;
-(id)initWithHistogram:(id)arg1 ;
@end

