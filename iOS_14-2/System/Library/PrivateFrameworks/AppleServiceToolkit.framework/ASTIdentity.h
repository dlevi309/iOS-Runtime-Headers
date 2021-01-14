/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/

#import <AppleServiceToolkit/AppleServiceToolkit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface ASTIdentity : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _aliases;
	NSArray* _json;
	NSString* _hostAppVersion;
	NSString* _hostAppBuild;

}

@property (nonatomic,readonly) NSString * userAgent; 
@property (nonatomic,retain) NSArray * aliases;                      //@synthesize aliases=_aliases - In the implementation block
@property (nonatomic,retain) NSArray * json;                         //@synthesize json=_json - In the implementation block
@property (nonatomic,retain) NSString * hostAppVersion;              //@synthesize hostAppVersion=_hostAppVersion - In the implementation block
@property (nonatomic,retain) NSString * hostAppBuild;                //@synthesize hostAppBuild=_hostAppBuild - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identityWithIdentityAliases:(id)arg1 ;
+(id)identityWithSerialNumber:(id)arg1 ;
-(NSArray *)aliases;
-(NSArray *)json;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAliases:(NSArray *)arg1 ;
-(void)setJson:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)userAgent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)hostAppBuild;
-(NSString *)hostAppVersion;
-(id)initWithIdentityAliases:(id)arg1 ;
-(id)_dictionariesFromIdentityAliases:(id)arg1 ;
-(void)setHostAppVersion:(NSString *)arg1 ;
-(void)setHostAppBuild:(NSString *)arg1 ;
@end

