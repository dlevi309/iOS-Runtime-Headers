/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
*/

#import <libobjc.A.dylib/LKStudentProviding.h>

@class NSArray, NSString;

@interface LKUsers : NSObject <LKStudentProviding> {

	NSArray* _students;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * students;                      //@synthesize students=_students - In the implementation block
-(id)initWithUsers:(id)arg1 ;
-(NSArray *)students;
-(void)setStudents:(NSArray *)arg1 ;
@end

