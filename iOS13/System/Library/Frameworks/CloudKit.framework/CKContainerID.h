/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKContainerID : NSObject <NSSecureCoding, NSCopying> {

	NSString* _containerIdentifier;
	long long _environment;

}

@property (nonatomic,readonly) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) long long environment;                       //@synthesize environment=_environment - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(long long)environment;
-(NSString *)containerIdentifier;
-(id)initWithContainerIdentifier:(id)arg1 environment:(long long)arg2 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)CKPropertiesDescription;
@end

