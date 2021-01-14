/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSTimeZone;

@interface ICPlayActivityEnqueuerProperties : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _buildVersion;
	NSString* _deviceGUID;
	NSString* _deviceName;
	NSNumber* _privateListeningEnabled;
	BOOL _SBEnabled;
	unsigned long long _storeAccountID;
	NSString* _storeFrontID;
	long long _systemReleaseType;
	NSTimeZone* _timeZone;

}

@property (nonatomic,copy,readonly) NSString * buildVersion;                                                          //@synthesize buildVersion=_buildVersion - In the implementation block
@property (getter=isPrivateListeningEnabled,nonatomic,copy,readonly) NSNumber * privateListeningEnabled;              //@synthesize privateListeningEnabled=_privateListeningEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceGUID;                                                            //@synthesize deviceGUID=_deviceGUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceName;                                                            //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,copy,readonly) NSTimeZone * timeZone;                                                            //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) long long systemReleaseType;                                                           //@synthesize systemReleaseType=_systemReleaseType - In the implementation block
@property (setter=BEnabled,getter=isSBEnabled,nonatomic,readonly) BOOL SBEnabled;                                     //@synthesize SBEnabled=_SBEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long storeAccountID;                                                     //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeFrontID;                                                          //@synthesize storeFrontID=_storeFrontID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSTimeZone *)timeZone;
-(NSString *)deviceName;
-(id)isPrivateListeningEnabled;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)storeAccountID;
-(id)description;
-(BOOL)isSBEnabled;
-(NSString *)deviceGUID;
-(NSString *)storeFrontID;
-(NSString *)buildVersion;
-(long long)systemReleaseType;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_copyWithClass:(Class)arg1 zone:(NSZone*)arg2 ;
@end

