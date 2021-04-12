/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _SFServiceIdentifier, NSArray, NSString, NSDate, NSDictionary, NSData;

@interface _SFCredential : NSObject <NSSecureCoding, NSCopying> {

	_SFServiceIdentifier* _primaryServiceIdentifier;
	NSArray* _supplementaryServiceIdentifiers;
	NSString* _label;
	NSString* _description;
	NSString* _persistentIdentifier;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	NSDictionary* _customAttributes;
	int _keyclass;
	NSString* _accessGroup;
	NSData* _changeToken;

}

@property (setter=_setPersistentIdentifier:,nonatomic,copy) NSString * persistentIdentifier;                  //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (setter=_setCreationDate:,nonatomic,copy) NSDate * creationDate;                                    //@synthesize creationDate=_creationDate - In the implementation block
@property (setter=_setModificationDate:,nonatomic,copy) NSDate * modificationDate;                            //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,setter=_setKeyclass:,getter=_keyclass,nonatomic) int keyclass; 
@property (setter=_setAccessGroup:,getter=_accessGroup,nonatomic,retain) NSString * accessGroup; 
@property (setter=_setChangeToken:,getter=_changeToken,nonatomic,retain) NSData * changeToken; 
@property (nonatomic,retain) _SFServiceIdentifier * primaryServiceIdentifier;                                 //@synthesize primaryServiceIdentifier=_primaryServiceIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * supplementaryServiceIdentifiers; 
@property (nonatomic,copy) NSString * localizedLabel;                                                         //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                                                   //@synthesize description=_description - In the implementation block
@property (nonatomic,copy) NSDictionary * customAttributes;                                                   //@synthesize customAttributes=_customAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)modificationDate;
-(void)setLocalizedLabel:(NSString *)arg1 ;
-(NSString *)localizedLabel;
-(void)_setCreationDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)persistentIdentifier;
-(id)_changeToken;
-(NSString *)localizedDescription;
-(NSDate *)creationDate;
-(NSDictionary *)customAttributes;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(_SFServiceIdentifier *)primaryServiceIdentifier;
-(void)setPrimaryServiceIdentifier:(_SFServiceIdentifier *)arg1 ;
-(id)_accessGroup;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)supplementaryServiceIdentifiers;
-(id)_initWithPrimaryServiceIdentifier:(id)arg1 supplementaryServiceIdentiifers:(id)arg2 ;
-(void)setSupplementaryServiceIdentifiers:(NSArray *)arg1 ;
-(void)setCustomAttributes:(NSDictionary *)arg1 ;
-(void)_setPersistentIdentifier:(id)arg1 ;
-(void)_setModificationDate:(id)arg1 ;
-(void)_setKeyclass:(int)arg1 ;
-(int)_keyclass;
-(void)_setAccessGroup:(id)arg1 ;
-(void)_setChangeToken:(id)arg1 ;
@end

