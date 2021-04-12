/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <Foundation/NSOperation.h>

@protocol _MFSearchResultsConsumer;
@class NSArray;

@interface _MFSearchAddResultsOperation : NSOperation {

	id<_MFSearchResultsConsumer> _consumer;
	unsigned long long _type;
	NSArray* _results;

}
+(id)operationWithResults:(id)arg1 ofType:(unsigned long long)arg2 consumer:(id)arg3 ;
-(void)main;
@end

