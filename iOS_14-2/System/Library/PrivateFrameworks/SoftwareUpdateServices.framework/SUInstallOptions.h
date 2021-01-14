/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <SoftwareUpdateServices/SUOptionsBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SUInstallOptions : SUOptionsBase <NSSecureCoding, NSCopying> {

	BOOL _darkBoot;
	BOOL _required;
	BOOL _managed;

}

@property (assign,getter=isManaged,nonatomic) BOOL managed;                //@synthesize managed=_managed - In the implementation block
@property (assign,getter=isDarkBoot,nonatomic) BOOL darkBoot;              //@synthesize darkBoot=_darkBoot - In the implementation block
@property (assign,getter=isRequired,nonatomic) BOOL required;              //@synthesize required=_required - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isManaged;
-(void)setRequired:(BOOL)arg1 ;
-(BOOL)isRequired;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setManaged:(BOOL)arg1 ;
-(void)setDarkBoot:(BOOL)arg1 ;
-(BOOL)isDarkBoot;
@end

