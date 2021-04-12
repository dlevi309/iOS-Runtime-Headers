/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class NSMutableArray;

@interface BRCDirectoryEnumerator : NSObject {

	NSMutableArray* _stack;
	BOOL _recursive;
	int* _err;

}
-(id)nextObject;
-(id)initForEnumeratingBelow:(id)arg1 recursive:(BOOL)arg2 error:(int*)arg3 ;
@end

