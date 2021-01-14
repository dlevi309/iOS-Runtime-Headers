/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSMutableArray;

@interface ProjectImportExport : NSObject {

	NSMutableArray* _exportedProjectList;

}

@property (retain) NSMutableArray * exportedProjectList;              //@synthesize exportedProjectList=_exportedProjectList - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setExportedProjectList:(NSMutableArray *)arg1 ;
-(NSMutableArray *)exportedProjectList;
-(void)refreshExportedProjectFileList;
-(BOOL)haveExportedProjectNamed:(id)arg1 ;
-(void)undeleteExportedProject:(id)arg1 ;
-(void)deleteExportedProject:(id)arg1 ;
-(void)deleteExportedProjectWithName:(id)arg1 ;
@end

