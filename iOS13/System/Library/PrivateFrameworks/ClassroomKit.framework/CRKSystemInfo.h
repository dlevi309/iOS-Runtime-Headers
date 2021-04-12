/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSString, NSDate;

@interface CRKSystemInfo : NSObject {

	NSString* _buildVersion;
	NSString* _systemVersion;

}

@property (nonatomic,copy,readonly) NSString * buildVersion;               //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * systemVersion;              //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long platform; 
@property (nonatomic,copy,readonly) NSDate * bootDate; 
+(id)sharedSystemInfo;
-(id)init;
-(NSString *)systemVersion;
-(unsigned long long)platform;
-(NSString *)buildVersion;
-(void)populateVersions;
-(NSDate *)bootDate;
@end

