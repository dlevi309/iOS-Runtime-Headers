/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * seIdentifier;                         //@synthesize seIdentifier=_seIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * identifierAsData;                       //@synthesize identifierAsData=_identifierAsData - In the implementation block
@property (nonatomic,readonly) NSData * discretionaryData;                      //@synthesize discretionaryData=_discretionaryData - In the implementation block
@property (nonatomic,readonly) unsigned char family;                            //@synthesize family=_family - In the implementation block
@property (nonatomic,readonly) unsigned char lifecycleState; 
@property (nonatomic,readonly) unsigned char activationState;                   //@synthesize activationState=_activationState - In the implementation block
@property (nonatomic,readonly) BOOL authTransientSupport;                       //@synthesize authTransientSupport=_authTransientSupport - In the implementation block
@property (nonatomic,readonly) NFApplet * groupHead; 
@property (nonatomic,readonly) NSArray * groupMembers; 
@property (nonatomic,readonly) NSArray * referencedApps; 
@property (nonatomic,readonly) BOOL authTransientConfigurable;                  //@synthesize authTransientConfigurable=_authTransientConfigurable - In the implementation block
@property (nonatomic,readonly) BOOL isTypeF; 
@property (nonatomic,readonly) unsigned char supportedTypeFSystem; 
@property (nonatomic,readonly) BOOL isGPLocked; 
@property (nonatomic,readonly) BOOL containsSubKeys; 
+(BOOL)supportsSecureCoding;
-(BOOL)isProxy;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(unsigned char)family;
-(unsigned char)activationState;
-(NSArray *)groupMembers;
-(BOOL)isContainer;
-(id)asDictionary;
-(BOOL)authTransientSupport;
-(id)groupMemberIDs;
-(id)multiSEGroupMemberIDs;
-(id)groupHeadID;
-(unsigned char)lifecycleState;
-(BOOL)isGPLocked;
-(BOOL)containsSubKeys;
-(void)setAppletCollection:(id)arg1 ;
-(BOOL)isEqualToApplet:(id)arg1 ;
-(NSData *)identifierAsData;
-(NSString *)seIdentifier;
-(BOOL)isTypeF;
-(unsigned char)supportedTypeFSystem;
-(void)_setIsActive:(BOOL)arg1 ;
-(id)packageIdentifier;
-(id)moduleIdentifier;
-(unsigned char)groupActivationStyle;
-(id)appletCollection;
-(NFApplet *)groupHead;
-(NSArray *)referencedApps;
-(id)multiSSDMembers;
-(BOOL)isPPSEControllable;
-(unsigned long long)rawGPState;
-(NSData *)discretionaryData;
-(BOOL)authTransientConfigurable;
@end

