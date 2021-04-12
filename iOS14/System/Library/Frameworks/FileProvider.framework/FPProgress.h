/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <Foundation/NSProgress.h>

@class NSOperation;

@interface FPProgress : NSProgress {

	NSOperation* _operation;

}
-(id)initWithOperation:(id)arg1 ;
-(void)cancel;
@end

