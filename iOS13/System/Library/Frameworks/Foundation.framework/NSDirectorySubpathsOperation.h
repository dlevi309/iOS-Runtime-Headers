/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSDirectoryTraversalOperation.h>

@class NSMutableArray;

@interface NSDirectorySubpathsOperation : NSDirectoryTraversalOperation {

	NSMutableArray* _subpaths;

}
+(id)directorySubpathsOperationAtPath:(id)arg1 ;
+(id)_errorWithErrno:(int)arg1 atPath:(id)arg2 ;
-(void)dealloc;
-(id)subpaths;
-(void)handlePathname:(id)arg1 ;
@end

