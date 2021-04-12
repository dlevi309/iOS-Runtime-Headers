/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, UIImage;

@interface CKSharedCourse : NSManagedObject

@property (nonatomic,copy) NSString * courseID; 
@property (nonatomic,retain) NSNumber * managedClassID; 
@property (assign,nonatomic) long long enrollmentType; 
@property (nonatomic,copy) NSString * shortName; 
@property (nonatomic,copy) NSString * longName; 
@property (nonatomic,copy) NSString * institutionName; 
@property (nonatomic,retain) UIImage * courseCover; 
@property (nonatomic,copy) NSString * courseCoverChecksum; 
-(void)setShortName:(NSString *)arg1 ;
-(void)setCourseID:(NSString *)arg1 ;
-(void)setManagedClassID:(NSNumber *)arg1 ;
-(void)setEnrollmentType:(long long)arg1 ;
-(void)setLongName:(NSString *)arg1 ;
-(void)setInstitutionName:(NSString *)arg1 ;
-(void)setCourseCover:(UIImage *)arg1 ;
@end

