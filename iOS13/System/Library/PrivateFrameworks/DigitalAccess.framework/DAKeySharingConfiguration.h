/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(unsigned long long)profile;
-(long long)targetDeviceType;
-(NSData *)metaData;
-(id)initWithProfile:(unsigned long long)arg1 displayName:(id)arg2 metaData:(id)arg3 targetDeviceType:(long long)arg4 ;
@end

