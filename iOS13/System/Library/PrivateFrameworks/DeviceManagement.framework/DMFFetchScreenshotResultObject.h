/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)screenshotData;
@end

