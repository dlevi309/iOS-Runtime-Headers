/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

