/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class DMFControlGroupIdentifier;

@interface CRKSetCourseMascotAndColorRequest : CATTaskRequest {

	DMFControlGroupIdentifier* _courseIdentifier;
	unsigned long long _mascotType;
	unsigned long long _colorType;

}

@property (nonatomic,retain) DMFControlGroupIdentifier * courseIdentifier;              //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long mascotType;                             //@synthesize mascotType=_mascotType - In the implementation block
@property (assign,nonatomic) unsigned long long colorType;                              //@synthesize colorType=_colorType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)colorType;
-(void)setColorType:(unsigned long long)arg1 ;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(unsigned long long)mascotType;
-(void)setMascotType:(unsigned long long)arg1 ;
@end

