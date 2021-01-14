/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@interface CRKFetchScreenshotRequest : CATTaskRequest {

	unsigned long long _maxWidth;
	unsigned long long _maxHeight;

}

@property (assign,nonatomic) unsigned long long maxWidth;               //@synthesize maxWidth=_maxWidth - In the implementation block
@property (assign,nonatomic) unsigned long long maxHeight;              //@synthesize maxHeight=_maxHeight - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)setMaxHeight:(unsigned long long)arg1 ;
-(unsigned long long)maxWidth;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)maxHeight;
-(void)setMaxWidth:(unsigned long long)arg1 ;
@end

