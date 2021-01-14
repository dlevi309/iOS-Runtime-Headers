/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFFetchConfigurationSourceSyncTokenResultObject : CATTaskResultObject {

	NSString* _syncToken;

}

@property (nonatomic,copy) NSString * syncToken;              //@synthesize syncToken=_syncToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSyncToken:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)syncToken;
@end

