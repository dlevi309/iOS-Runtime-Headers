/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSData;

@interface DMFFetchScreenshotResultObject : CATTaskResultObject {

	NSData* _screenshotData;

}

@property (nonatomic,readonly) NSData * screenshotData;              //@synthesize screenshotData=_screenshotData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)screenshotData;
@end

