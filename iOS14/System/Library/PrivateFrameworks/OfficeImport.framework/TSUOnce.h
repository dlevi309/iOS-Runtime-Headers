/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

