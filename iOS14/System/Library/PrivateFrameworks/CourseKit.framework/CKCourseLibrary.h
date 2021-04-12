/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSManagedObjectContext *)moc;
-(id)init;
-(void)setMoc:(NSManagedObjectContext *)arg1 ;
-(CKSharedDatabase *)sharedDatabase;
-(id)allCourses;
-(id)courseWithCourseID:(id)arg1 ;
-(id)courseLibrayVersion;
-(void)setSharedDatabase:(CKSharedDatabase *)arg1 ;
@end

