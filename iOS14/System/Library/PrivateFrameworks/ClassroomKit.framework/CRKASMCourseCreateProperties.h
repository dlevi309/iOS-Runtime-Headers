/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol CRKASMLocation;
@class CRKASMCourseUpdateProperties;

@interface CRKASMCourseCreateProperties : NSObject <NSCopying> {

	id<CRKASMLocation> _location;
	CRKASMCourseUpdateProperties* _updateProperties;

}

@property (nonatomic,retain) id<CRKASMLocation> location;                                //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) CRKASMCourseUpdateProperties * updateProperties;              //@synthesize updateProperties=_updateProperties - In the implementation block
-(id<CRKASMLocation>)location;
-(void)setLocation:(id<CRKASMLocation>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CRKASMCourseUpdateProperties *)updateProperties;
-(BOOL)areFulfilledByCourse:(id)arg1 ;
-(void)setUpdateProperties:(CRKASMCourseUpdateProperties *)arg1 ;
@end

