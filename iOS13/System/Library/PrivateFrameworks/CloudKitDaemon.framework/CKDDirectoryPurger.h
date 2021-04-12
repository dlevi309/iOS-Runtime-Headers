/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSArray;

@interface CKDDirectoryPurger : NSObject {

	/*^block*/id _shouldSkipFileBlock;
	/*^block*/id _shouldRemoveFileBlock;
	NSArray* _paths;

}

@property (nonatomic,retain) NSArray * paths;                     //@synthesize paths=_paths - In the implementation block
@property (nonatomic,copy) id shouldSkipFileBlock;                //@synthesize shouldSkipFileBlock=_shouldSkipFileBlock - In the implementation block
@property (nonatomic,copy) id shouldRemoveFileBlock;              //@synthesize shouldRemoveFileBlock=_shouldRemoveFileBlock - In the implementation block
+(void)purgeDirectoryAtPath:(id)arg1 ;
-(void)purge;
-(void)setPaths:(NSArray *)arg1 ;
-(NSArray *)paths;
-(id)initWithPaths:(id)arg1 ;
-(void)setShouldRemoveFileBlock:(id)arg1 ;
-(id)shouldSkipFileBlock;
-(id)shouldRemoveFileBlock;
-(void)setShouldSkipFileBlock:(id)arg1 ;
@end

