/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSString, NSDate;

@interface CRKSystemInfo : NSObject {

	NSString* _buildVersion;
	NSString* _systemVersion;

}

@property (nonatomic,copy) NSString * buildVersion;                                              //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,copy) NSString * systemVersion;                                             //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long platform; 
@property (nonatomic,copy,readonly) NSDate * bootDate; 
@property (getter=isEphemeralMultiUser,nonatomic,readonly) BOOL ephemeralMultiUser; 
@property (nonatomic,readonly) BOOL cloudConfigEnablesEphemeralMultiUser; 
+(id)sharedSystemInfo;
-(NSString *)systemVersion;
-(unsigned long long)platform;
-(BOOL)isEphemeralMultiUser;
-(void)setSystemVersion:(NSString *)arg1 ;
-(void)setBuildVersion:(NSString *)arg1 ;
-(NSString *)buildVersion;
-(BOOL)cloudConfigEnablesEphemeralMultiUser;
-(void)populateVersions;
-(NSDate *)bootDate;
@end

