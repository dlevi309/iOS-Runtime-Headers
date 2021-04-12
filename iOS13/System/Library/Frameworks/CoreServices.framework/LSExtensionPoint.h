/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSQueryResult.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _LSLazyPropertyList, NSString, NSNumber, NSDictionary;

@interface LSExtensionPoint : _LSQueryResult <NSCopying, NSSecureCoding> {

	unsigned _platform;
	_LSLazyPropertyList* _sdkEntry;
	NSString* _identifier;
	NSString* _name;
	NSString* _version;

}

@property (nonatomic,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * version;                   //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSNumber * platform; 
@property (nonatomic,readonly) NSDictionary * sdkEntry; 
+(BOOL)supportsSecureCoding;
+(id)extensionPointForIdentifier:(id)arg1 platform:(id)arg2 ;
+(id)extensionPointForIdentifier:(id)arg1 ;
+(id)identifierForCurrentProcess;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)version;
-(NSNumber *)platform;
-(NSDictionary *)sdkEntry;
-(id)_initWithIdentifier:(id)arg1 platform:(unsigned)arg2 data:(id)arg3 ;
@end

