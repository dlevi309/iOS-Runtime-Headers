/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSFileHandle;

@interface NSPipe : NSObject

@property (retain,readonly) NSFileHandle * fileHandleForReading; 
@property (retain,readonly) NSFileHandle * fileHandleForWriting; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)pipe;
-(id)init;
-(void)_closeOnDealloc;
-(NSFileHandle *)fileHandleForReading;
-(NSFileHandle *)fileHandleForWriting;
@end

