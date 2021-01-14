/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class CRKCourse, NSString;

@interface CRKExpiredCourseAlertText : NSObject {

	CRKCourse* _course;

}

@property (nonatomic,readonly) CRKCourse * course;                             //@synthesize course=_course - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * acknowledgeOptionTitle; 
@property (nonatomic,readonly) NSString * message; 
+(id)new;
-(CRKCourse *)course;
-(NSString *)message;
-(id)init;
-(NSString *)title;
-(id)initWithCourse:(id)arg1 ;
-(NSString *)acknowledgeOptionTitle;
@end

