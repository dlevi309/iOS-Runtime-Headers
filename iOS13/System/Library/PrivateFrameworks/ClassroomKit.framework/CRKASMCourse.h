/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

@class DMFControlGroupIdentifier, NSString;


@protocol CRKASMCourse
@property (nonatomic,copy,readonly) DMFControlGroupIdentifier * identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long mascot; 
@property (nonatomic,readonly) unsigned long long color; 
@required
-(NSString *)name;
-(DMFControlGroupIdentifier *)identifier;
-(unsigned long long)color;
-(unsigned long long)mascot;

@end

