/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <libobjc.A.dylib/NSFileManagerDelegate.h>

@class NSString;

@interface MBFileManagerDelegate : NSObject <NSFileManagerDelegate> {

	/*^block*/id _shouldCopyItemAtPathToPath;

}

@property (nonatomic,copy) id shouldCopyItemAtPathToPath;              //@synthesize shouldCopyItemAtPathToPath=_shouldCopyItemAtPathToPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fileManager:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(id)shouldCopyItemAtPathToPath;
-(void)setShouldCopyItemAtPathToPath:(id)arg1 ;
@end

