/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, MPCPrivateListeningStateSource, NSTimeZone;

@interface MPCPlaybackDelegationProperties : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _deviceGUID;
	NSString* _deviceName;
	MPCPrivateListeningStateSource* _privateListeningStateSource;
	long long _systemReleaseType;
	NSString* _requestUserAgent;
	unsigned long long _storeAccountID;
	NSTimeZone* _timeZone;

}

@property (nonatomic,readonly) unsigned long long storeAccountID;                                              //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceGUID;                                                     //@synthesize deviceGUID=_deviceGUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceName;                                                     //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,copy,readonly) MPCPrivateListeningStateSource * privateListeningStateSource;              //@synthesize privateListeningStateSource=_privateListeningStateSource - In the implementation block
@property (nonatomic,readonly) long long systemReleaseType;                                                    //@synthesize systemReleaseType=_systemReleaseType - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestUserAgent;                                               //@synthesize requestUserAgent=_requestUserAgent - In the implementation block
@property (nonatomic,copy,readonly) NSTimeZone * timeZone;                                                     //@synthesize timeZone=_timeZone - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSTimeZone *)timeZone;
-(NSString *)deviceName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)storeAccountID;
-(NSString *)deviceGUID;
-(long long)systemReleaseType;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_copyWithClass:(Class)arg1 zone:(NSZone*)arg2 ;
-(MPCPrivateListeningStateSource *)privateListeningStateSource;
-(id)initWithStoreAccountID:(unsigned long long)arg1 deviceGUID:(id)arg2 privateListeningStateSource:(id)arg3 ;
-(NSString *)requestUserAgent;
@end

