/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString, NSData, DMFControlGroupIdentifier;

@interface CRKSetUserImageRequest : CATTaskRequest {

	NSString* _userIdentifier;
	NSData* _userImageData;
	DMFControlGroupIdentifier* _courseIdentifier;

}

@property (nonatomic,copy) NSString * userIdentifier;                                   //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSData * userImageData;                                      //@synthesize userImageData=_userImageData - In the implementation block
@property (nonatomic,retain) DMFControlGroupIdentifier * courseIdentifier;              //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)userIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(NSData *)userImageData;
-(void)setUserImageData:(NSData *)arg1 ;
@end

