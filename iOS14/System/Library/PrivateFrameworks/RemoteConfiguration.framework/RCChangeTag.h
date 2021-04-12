/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/

#import <libobjc.A.dylib/RCSerializable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RCChangeTag : NSObject <RCSerializable, NSSecureCoding> {

	NSString* _identifier;
	NSString* _contentHash;
	NSString* _lastModifiedString;

}

@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentHash;                     //@synthesize contentHash=_contentHash - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastModifiedString;              //@synthesize lastModifiedString=_lastModifiedString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(NSString *)lastModifiedString;
-(NSString *)contentHash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithIdentifier:(id)arg1 contentHash:(id)arg2 lastModifiedString:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
@end

