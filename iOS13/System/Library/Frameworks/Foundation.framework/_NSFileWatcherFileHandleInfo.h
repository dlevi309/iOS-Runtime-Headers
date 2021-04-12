/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSFileWatcherFileHandleInfo : NSObject {

	int fileHandle;
	BOOL closed;

}

@property (readonly) BOOL isDirectory; 
+(id)openFileWithPath:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)close;
-(BOOL)isDirectory;
-(BOOL)verifyAccessByAuditToken:(SCD_Struct_NS0)arg1 ;
@end

