/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)dictionaryRepresentation;
-(NSString *)contentHash;
-(NSString *)lastModifiedString;
-(id)initWithIdentifier:(id)arg1 contentHash:(id)arg2 lastModifiedString:(id)arg3 ;
@end

