/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISIconDecorationInternal.h>
#import <libobjc.A.dylib/ISIconDecoration.h>

@protocol ISIconDecoration <NSObject,NSSecureCoding>
@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface ISIconDecoration : NSObject <ISIconDecorationInternal, ISIconDecoration, NSCopying> {

	long long _position;
	long long _mode;
	NSString* _identifier;
	unsigned long long _identifierKind;

}

@property (readonly) NSUUID * uuid; 
@property (readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long identifierKind;              //@synthesize identifierKind=_identifierKind - In the implementation block
@property (readonly) NSUUID * resourceFingerprint; 
@property (assign) long long position;                               //@synthesize position=_position - In the implementation block
@property (assign) long long mode;                                   //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithType:(id)arg1 ;
-(long long)position;
-(long long)mode;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSUUID *)uuid;
-(id)init;
-(NSUUID *)resourceFingerprint;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMode:(long long)arg1 ;
-(unsigned long long)identifierKind;
-(NSString *)description;
-(void)prepareImagesForDescriptors:(id)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)imageForDescriptor:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

