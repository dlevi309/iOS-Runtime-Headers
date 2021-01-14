/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface ASDBetaAppDisplayNames : NSObject <NSSecureCoding> {

	NSDictionary* _localizedNames;
	NSString* _primaryLocale;

}

@property (copy) NSDictionary * localizedNames;              //@synthesize localizedNames=_localizedNames - In the implementation block
@property (copy) NSString * primaryLocale;                   //@synthesize primaryLocale=_primaryLocale - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)displayNameWithLocalizedNames:(id)arg1 andPrimaryLocale:(id)arg2 ;
-(NSDictionary *)localizedNames;
-(void)setLocalizedNames:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setPrimaryLocale:(NSString *)arg1 ;
-(NSString *)primaryLocale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

