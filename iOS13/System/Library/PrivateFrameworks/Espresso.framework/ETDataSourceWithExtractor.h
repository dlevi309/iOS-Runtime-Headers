/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

