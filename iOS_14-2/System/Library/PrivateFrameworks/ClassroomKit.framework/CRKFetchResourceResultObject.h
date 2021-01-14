/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSData;

@interface CRKFetchResourceResultObject : CATTaskResultObject {

	NSData* _resourceData;

}

@property (nonatomic,retain) NSData * resourceData;              //@synthesize resourceData=_resourceData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)resourceData;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setResourceData:(NSData *)arg1 ;
@end

