/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

