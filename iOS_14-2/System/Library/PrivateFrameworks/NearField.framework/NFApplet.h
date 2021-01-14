/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NFAppletCollection;
@class NSString, NSArray, NSObject, NSData;

@interface NFApplet : NSObject <NSSecureCoding> {

	NSString* _groupHeadID;
	NSArray* _groupMemberIDs;
	NSArray* _referencedAppIDs;
	BOOL _isContainer;
	BOOL _isProxy;
	NSString* _packageIdentifier;
	NSString* _moduleIdentifier;
	NSArray* _multiSEApplicationGroupMemberIDs;
	unsigned char _appletGPState;
	unsigned char _groupActivationStyle;
	NSObject*<NFAppletCollection> _appletCollection;
	NSData* _typeFSystemCode;
	unsigned char _family;
	unsigned char _activationState;
	BOOL _authTransientSupport;
	BOOL _authTransientConfigurable;
	NSString* _identifier;
	NSString* _seIdentifier;
	NSData* _identifierAsData;
	NSData* _discretionaryData;

}

@property (nonatomic,retain,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) NSString * seIdentifier;                   //@synthesize seIdentifier=_seIdentifier - In the implementation block
@property (nonatomic,retain,readonly) NSData * identifierAsData;                 //@synthesize identifierAsData=_identifierAsData - In the implementation block
@property (nonatomic,retain,readonly) NSData * discretionaryData;                //@synthesize discretionaryData=_discretionaryData - In the implementation block
@property (nonatomic,retain,readonly) NSString * packageIdentifier; 
@property (nonatomic,readonly) unsigned char family;                             //@synthesize family=_family - In the implementation block
@property (nonatomic,readonly) unsigned char lifecycleState; 
@property (nonatomic,readonly) unsigned char activationState;                    //@synthesize activationState=_activationState - In the implementation block
@property (nonatomic,readonly) BOOL authTransientSupport;                        //@synthesize authTransientSupport=_authTransientSupport - In the implementation block
@property (nonatomic,retain,readonly) NFApplet * groupHead; 
@property (nonatomic,retain,readonly) NSArray * groupMembers; 
@property (nonatomic,retain,readonly) NSArray * referencedApps; 
@property (nonatomic,readonly) BOOL authTransientConfigurable;                   //@synthesize authTransientConfigurable=_authTransientConfigurable - In the implementation block
@property (nonatomic,readonly) BOOL isTypeF; 
@property (nonatomic,readonly) BOOL suppressTypeB; 
@property (nonatomic,readonly) unsigned char supportedTypeFSystem; 
@property (nonatomic,readonly) BOOL isGPLocked; 
@property (nonatomic,readonly) BOOL containsSubKeys; 
+(BOOL)supportsSecureCoding;
-(BOOL)isTypeF;
-(id)asDictionary;
-(void)setAppletCollection:(id)arg1 ;
-(unsigned char)lifecycleState;
-(BOOL)isProxy;
-(BOOL)isContainer;
-(unsigned char)activationState;
-(id)appletCollection;
-(void)_setIsActive:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)authTransientSupport;
-(id)groupHeadID;
-(id)multiSEGroupMemberIDs;
-(unsigned long long)rawGPState;
-(id)groupMemberIDs;
-(NSData *)discretionaryData;
-(NSString *)packageIdentifier;
-(id)initWithDictionary:(id)arg1 ;
-(id)multiSSDMembers;
-(BOOL)authTransientConfigurable;
-(unsigned char)family;
-(id)moduleIdentifier;
-(id)description;
-(NSData *)identifierAsData;
-(unsigned char)supportedTypeFSystem;
-(NFApplet *)groupHead;
-(BOOL)isEqualToApplet:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)seIdentifier;
-(NSString *)identifier;
-(unsigned char)groupActivationStyle;
-(NSArray *)groupMembers;
-(BOOL)containsSubKeys;
-(BOOL)suppressTypeB;
-(BOOL)isGPLocked;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)referencedApps;
-(BOOL)isPPSEControllable;
@end

