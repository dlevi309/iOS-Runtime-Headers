/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_closeOnDealloc;
-(id)fileHandleForReading;
-(id)fileHandleForWriting;
@end

