/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSpeakableString, NSArray, NSDateComponents, NSString;

@interface INNote : NSObject <INImageProxyInjecting, INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {

	INSpeakableString* _title;
	NSArray* _contents;
	INSpeakableString* _groupName;
	NSDateComponents* _createdDateComponents;
	NSDateComponents* _modifiedDateComponents;
	NSString* _identifier;
	NSString* _accountIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=_setContents:,nonatomic,copy) NSArray * contents;                         //@synthesize contents=_contents - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountIdentifier;                           //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * groupName;                          //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * createdDateComponents;               //@synthesize createdDateComponents=_createdDateComponents - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * modifiedDateComponents;              //@synthesize modifiedDateComponents=_modifiedDateComponents - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSArray *)contents;
-(id)initWithTitle:(id)arg1 contents:(id)arg2 groupName:(id)arg3 createdDateComponents:(id)arg4 modifiedDateComponents:(id)arg5 identifier:(id)arg6 accountIdentifier:(id)arg7 ;
-(id)init;
-(INSpeakableString *)groupName;
-(NSString *)accountIdentifier;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(void)_setContents:(id)arg1 ;
-(id)initWithTitle:(id)arg1 contents:(id)arg2 groupName:(id)arg3 createdDateComponents:(id)arg4 modifiedDateComponents:(id)arg5 identifier:(id)arg6 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSDateComponents *)createdDateComponents;
-(NSDateComponents *)modifiedDateComponents;
-(NSString *)description;
-(unsigned long long)hash;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(INSpeakableString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

