/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CDDCloudKitMessage.h>

@class NSString;

@interface CDDCloudKitScheduleActivityMessage : CDDCloudKitMessage {

	unsigned long long _activityType;
	NSString* _storePath;

}

@property (nonatomic,readonly) unsigned long long activityType;              //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) NSString * storePath;                         //@synthesize storePath=_storePath - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)activityType;
-(id)initWithActivityType:(unsigned long long)arg1 forStoreWithPath:(id)arg2 ;
-(NSString *)storePath;
@end

