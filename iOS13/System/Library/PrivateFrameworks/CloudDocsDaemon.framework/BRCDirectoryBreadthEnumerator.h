/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
@class BRCRelativePath;

@interface BRCDirectoryBreadthEnumerator : NSObject {

	SCD_Struct_BR20* _dir;
	BRCRelativePath* _parentPath;

}
-(void)dealloc;
-(id)initWithParentPath:(id)arg1 error:(int*)arg2 ;
-(id)nextObjectWithIsDir:(BOOL*)arg1 error:(int*)arg2 ;
@end

