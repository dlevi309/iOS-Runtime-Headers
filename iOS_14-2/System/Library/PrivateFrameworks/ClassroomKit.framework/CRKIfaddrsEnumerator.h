/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class CRKIfaddrs;

@interface CRKIfaddrsEnumerator : NSEnumerator {

	ifaddrs* mInterfaces;
	CRKIfaddrs* mCurrentInterface;

}
+(id)internetInterfaceEnumeratorWithError:(id*)arg1 ;
+(id)enumeratorWithError:(id*)arg1 ;
-(id)nextObject;
-(id)initWithError:(id*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithInterfaces:(ifaddrs*)arg1 ;
@end

