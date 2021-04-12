/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSData;

@interface CRKFetchUserImageResultObject : CATTaskResultObject {

	NSData* _userImageData;

}

@property (nonatomic,copy) NSData * userImageData;              //@synthesize userImageData=_userImageData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)userImageData;
-(void)setUserImageData:(NSData *)arg1 ;
@end

