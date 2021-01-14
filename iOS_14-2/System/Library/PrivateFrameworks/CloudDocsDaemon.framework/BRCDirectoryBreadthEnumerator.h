/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

