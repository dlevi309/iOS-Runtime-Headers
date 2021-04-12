/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSSStyleObject.h>

@class TSSStyle, NSMutableArray;

@interface TSSStylePromise : NSObject <TSSStyleObject> {

	TSSStyle* _sourceStyle;
	NSMutableArray* _promisees;

}
+(id)promiseForStyle:(id)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(id)arg1 ;
-(void)addPromisee:(id)arg1 ;
-(void)fulfillWithStyle:(id)arg1 ;
@end

