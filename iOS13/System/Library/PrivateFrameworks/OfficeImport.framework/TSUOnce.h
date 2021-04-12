/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface TSUOnce : NSObject <NSCopying> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _didPerformOnce;

}
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)performBlockOnce:(/*^block*/id)arg1 ;
@end

