/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)localizedNames;
-(void)setLocalizedNames:(NSDictionary *)arg1 ;
-(void)setPrimaryLocale:(NSString *)arg1 ;
-(NSString *)primaryLocale;
@end

