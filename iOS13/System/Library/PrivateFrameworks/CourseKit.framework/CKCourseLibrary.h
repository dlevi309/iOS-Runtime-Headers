/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit
*/


@class CKSharedDatabase, NSManagedObjectContext;

@interface CKCourseLibrary : NSObject {

	CKSharedDatabase* _sharedDatabase;
	NSManagedObjectContext* _moc;

}

@property (nonatomic,retain) CKSharedDatabase * sharedDatabase;              //@synthesize sharedDatabase=_sharedDatabase - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * moc;                   //@synthesize moc=_moc - In the implementation block
+(id)sharedDocumentsDirectory;
+(id)sharedCourseLibrary;
+(BOOL)isCourseLibraryAvailable;
+(BOOL)openCourse:(id)arg1 ;
-(id)init;
-(NSManagedObjectContext *)moc;
-(void)setMoc:(NSManagedObjectContext *)arg1 ;
-(CKSharedDatabase *)sharedDatabase;
-(id)allCourses;
-(id)courseWithCourseID:(id)arg1 ;
-(id)courseLibrayVersion;
-(void)setSharedDatabase:(CKSharedDatabase *)arg1 ;
@end

