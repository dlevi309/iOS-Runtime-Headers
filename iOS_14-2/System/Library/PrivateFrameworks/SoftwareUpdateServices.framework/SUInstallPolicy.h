/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SUInstallPolicy : NSObject <NSSecureCoding> {

	unsigned long long _skipsAllowed;
	unsigned long long _type;
	BOOL _autoUpdateEnabled;
	BOOL _useDarkBoot;

}

@property (assign,nonatomic) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long skipsAllowed;              //@synthesize skipsAllowed=_skipsAllowed - In the implementation block
@property (nonatomic,readonly) BOOL autoUpdateEnabled;                     //@synthesize autoUpdateEnabled=_autoUpdateEnabled - In the implementation block
@property (nonatomic,readonly) BOOL useDarkBoot;                           //@synthesize useDarkBoot=_useDarkBoot - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(BOOL)autoUpdateEnabled;
-(id)description;
-(unsigned long long)type;
-(void)_setType:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithInstallPolicyType:(unsigned long long)arg1 ;
-(void)setSkipsAllowed:(unsigned long long)arg1 ;
-(BOOL)useDarkBoot;
-(unsigned long long)skipsAllowed;
-(void)_setAutoUpdateEnabled:(BOOL)arg1 ;
-(void)_setDarkBoolEnabled:(BOOL)arg1 ;
@end

