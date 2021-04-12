/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setColorType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)colorType;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(unsigned long long)mascotType;
-(void)setMascotType:(unsigned long long)arg1 ;
@end

