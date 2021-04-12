/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
*/

#import <libobjc.A.dylib/LKStudentProviding.h>

@class NSArray, NSString;

@interface LKUsers : NSObject <LKStudentProviding> {

	NSArray* _students;

}

@property (nonatomic,copy) NSArray * students;                      //@synthesize students=_students - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUsers:(id)arg1 ;
-(NSArray *)students;
-(void)setStudents:(NSArray *)arg1 ;
@end

