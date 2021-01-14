/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, AFBulletin, AceObject, NSDictionary;

@interface AFApplicationContext : NSObject <NSCopying, NSSecureCoding> {

	NSString* _associatedBundleIdentifier;
	AFBulletin* _bulletin;
	AceObject* _aceContext;
	NSDictionary* _contextDictionary;

}

@property (nonatomic,copy,readonly) NSString * associatedBundleIdentifier;              //@synthesize associatedBundleIdentifier=_associatedBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) AFBulletin * bulletin;                              //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,copy,readonly) AceObject * aceContext;                             //@synthesize aceContext=_aceContext - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * contextDictionary;                   //@synthesize contextDictionary=_contextDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(NSDictionary *)contextDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)associatedBundleIdentifier;
-(AceObject *)aceContext;
-(id)initWithAssociatedBundleIdentifier:(id)arg1 bulletin:(id)arg2 aceContext:(id)arg3 contextDictionary:(id)arg4 ;
-(AFBulletin *)bulletin;
-(id)description;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

