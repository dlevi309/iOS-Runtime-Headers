/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(NSString *)deviceName;
-(unsigned long long)storeAccountID;
-(NSString *)deviceGUID;
-(long long)systemReleaseType;
-(id)_copyWithClass:(Class)arg1 zone:(NSZone*)arg2 ;
-(MPCPrivateListeningStateSource *)privateListeningStateSource;
-(id)initWithStoreAccountID:(unsigned long long)arg1 deviceGUID:(id)arg2 privateListeningStateSource:(id)arg3 ;
-(NSString *)requestUserAgent;
@end

