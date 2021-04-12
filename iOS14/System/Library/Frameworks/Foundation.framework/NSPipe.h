/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSFileHandle *)fileHandleForWriting;
-(NSFileHandle *)fileHandleForReading;
-(void)_closeOnDealloc;
@end

