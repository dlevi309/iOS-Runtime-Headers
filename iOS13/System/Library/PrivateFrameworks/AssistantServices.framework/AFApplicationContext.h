/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(NSString *)associatedBundleIdentifier;
-(AFBulletin *)bulletin;
-(AceObject *)aceContext;
-(NSDictionary *)contextDictionary;
-(id)initWithAssociatedBundleIdentifier:(id)arg1 bulletin:(id)arg2 aceContext:(id)arg3 contextDictionary:(id)arg4 ;
@end

