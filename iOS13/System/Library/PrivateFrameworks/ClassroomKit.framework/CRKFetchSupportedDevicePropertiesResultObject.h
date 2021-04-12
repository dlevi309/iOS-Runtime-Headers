/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchSupportedDevicePropertiesResultObject : CATTaskResultObject {

	NSArray* _staticProperties;
	NSArray* _liveProperties;

}

@property (nonatomic,retain) NSArray * staticProperties;              //@synthesize staticProperties=_staticProperties - In the implementation block
@property (nonatomic,retain) NSArray * liveProperties;                //@synthesize liveProperties=_liveProperties - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)staticProperties;
-(NSArray *)liveProperties;
-(void)setStaticProperties:(NSArray *)arg1 ;
-(void)setLiveProperties:(NSArray *)arg1 ;
@end

