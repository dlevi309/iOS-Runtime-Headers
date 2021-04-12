/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class CRKIfaddrs;

@interface CRKIfaddrsEnumerator : NSEnumerator {

	ifaddrs* mInterfaces;
	CRKIfaddrs* mCurrentInterface;

}
+(id)enumeratorWithError:(id*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)nextObject;
-(id)initWithError:(id*)arg1 ;
-(id)initWithInterfaces:(ifaddrs*)arg1 ;
@end

