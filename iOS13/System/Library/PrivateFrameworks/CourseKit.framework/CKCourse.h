/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit
*/


@class NSDictionary, NSString, NSNumber, UIImage, NSURL;

@interface CKCourse : NSObject {

	NSDictionary* _sharedCourse;

}

@property (nonatomic,copy) NSDictionary * sharedCourse;                      //@synthesize sharedCourse=_sharedCourse - In the implementation block
@property (nonatomic,copy,readonly) NSString * courseID; 
@property (nonatomic,readonly) NSNumber * managedClassID; 
@property (nonatomic,readonly) long long enrollmentType; 
@property (nonatomic,copy,readonly) NSString * shortName; 
@property (nonatomic,copy,readonly) NSString * longName; 
@property (nonatomic,copy,readonly) NSString * institutionName; 
@property (nonatomic,readonly) UIImage * courseCover; 
@property (nonatomic,readonly) NSURL * courseURL; 
+(void)initialize;
+(id)sharedCoursePropertiesToFetch;
-(NSString *)shortName;
-(id)initWithSharedCourse:(id)arg1 ;
-(NSURL *)courseURL;
-(NSDictionary *)sharedCourse;
-(NSString *)courseID;
-(NSNumber *)managedClassID;
-(long long)enrollmentType;
-(NSString *)longName;
-(NSString *)institutionName;
-(UIImage *)courseCover;
-(void)setSharedCourse:(NSDictionary *)arg1 ;
@end

