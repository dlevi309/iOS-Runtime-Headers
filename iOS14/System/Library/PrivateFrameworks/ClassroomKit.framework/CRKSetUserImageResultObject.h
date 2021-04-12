/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface CRKSetUserImageResultObject : CATTaskResultObject {

	NSString* _imageIdentifier;

}

@property (nonatomic,copy) NSString * imageIdentifier;              //@synthesize imageIdentifier=_imageIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)imageIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)setImageIdentifier:(NSString *)arg1 ;
@end

