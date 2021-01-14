/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <libobjc.A.dylib/ETDataSource.h>

@protocol ETDataSource;
@class ETImageDescriptorExtractor;

@interface ETDataSourceWithExtractor : NSObject <ETDataSource> {

	id<ETDataSource> _source;
	ETImageDescriptorExtractor* _extractor;

}
-(int)numberOfDataPoints;
-(id)dataPointAtIndex:(int)arg1 ;
-(id)initWithDataSource:(id)arg1 extractor:(id)arg2 ;
@end

