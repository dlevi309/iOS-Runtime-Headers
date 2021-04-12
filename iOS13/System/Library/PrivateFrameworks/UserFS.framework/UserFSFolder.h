/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
*/

#import <UserFS/UserFSItem.h>

@interface UserFSFolder : UserFSItem
-(BOOL)isDirectory;
-(id)_pathForChildNamed:(id)arg1 ;
-(id)childNamed:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteChildNamed:(id)arg1 error:(id*)arg2 ;
-(BOOL)enumerateChildrenAndReturnError:(id*)arg1 callback:(/*^block*/id)arg2 ;
@end

