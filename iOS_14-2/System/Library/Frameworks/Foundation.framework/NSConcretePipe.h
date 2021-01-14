/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPipe.h>

@class NSFileHandle;

@interface NSConcretePipe : NSPipe {

	NSFileHandle* _readHandle;
	NSFileHandle* _writeHandle;

}
-(id)init;
-(id)fileHandleForWriting;
-(id)fileHandleForReading;
-(void)_closeOnDealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

