/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchDevicesResultObject : CATTaskResultObject {

	NSArray* _connectedDevices;

}

@property (nonatomic,copy) NSArray * connectedDevices;              //@synthesize connectedDevices=_connectedDevices - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)connectedDevices;
-(id)initWithCoder:(id)arg1 ;
-(void)setConnectedDevices:(NSArray *)arg1 ;
@end

