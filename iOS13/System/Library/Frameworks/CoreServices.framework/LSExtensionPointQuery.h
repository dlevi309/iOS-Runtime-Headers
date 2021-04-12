/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/_LSQuery.h>

@class NSString;

@interface LSExtensionPointQuery : _LSQuery {

	NSString* _identifier;
	NSString* _version;
	unsigned _platform;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * version;                 //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned platform;                  //@synthesize platform=_platform - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)extensionPointQueryForIdentifier:(id)arg1 platform:(unsigned)arg2 version:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)version;
-(id)_initWithIdentifier:(id)arg1 platform:(unsigned)arg2 version:(id)arg3 ;
-(unsigned)platform;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
@end

