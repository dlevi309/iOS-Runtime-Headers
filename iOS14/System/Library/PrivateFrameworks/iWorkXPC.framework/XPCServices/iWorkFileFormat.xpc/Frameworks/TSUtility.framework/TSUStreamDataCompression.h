/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUStreamCompression.h>

@protocol OS_dispatch_data;
@class NSObject;

@interface TSUStreamDataCompression : TSUStreamCompression {

	NSObject*<OS_dispatch_data> _outputData;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_data> outputData; 
-(void)setHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_data>)outputData;
-(id)initWithAlgorithm:(int)arg1 operation:(int)arg2 ;
-(BOOL)handleData:(id)arg1 isDone:(BOOL)arg2 ;
@end

