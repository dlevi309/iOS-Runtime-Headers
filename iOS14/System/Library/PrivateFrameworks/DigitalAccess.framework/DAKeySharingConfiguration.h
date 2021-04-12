/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface DAKeySharingConfiguration : NSObject <NSSecureCoding> {

	unsigned long long _profile;
	NSString* _displayName;
	NSData* _metaData;
	long long _targetDeviceType;

}

@property (nonatomic,readonly) unsigned long long profile;              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSData * metaData;                       //@synthesize metaData=_metaData - In the implementation block
@property (nonatomic,readonly) long long targetDeviceType;              //@synthesize targetDeviceType=_targetDeviceType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithProfile:(unsigned long long)arg1 displayName:(id)arg2 metaData:(id)arg3 targetDeviceType:(long long)arg4 ;
-(id)description;
-(long long)targetDeviceType;
-(NSData *)metaData;
-(unsigned long long)profile;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
@end

