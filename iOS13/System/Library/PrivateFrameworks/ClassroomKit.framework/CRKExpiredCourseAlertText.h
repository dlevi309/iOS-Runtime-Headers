/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)title;
-(NSString *)message;
-(CRKCourse *)course;
-(id)initWithCourse:(id)arg1 ;
-(NSString *)acknowledgeOptionTitle;
@end

