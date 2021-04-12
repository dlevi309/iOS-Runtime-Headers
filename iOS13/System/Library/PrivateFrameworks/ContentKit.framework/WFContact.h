/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WFSerializableContent.h>

@class NSString, WFFileRepresentation, NSArray, NSData, WFContactLabeledValue, NSDate;

@interface WFContact : NSObject <WFNaming, NSCopying, NSSecureCoding, WFSerializableContent> {

	BOOL _hasImageData;
	int _propertyID;
	WFFileRepresentation* _vCardRepresentation;
	long long _multivalueIndex;
	NSString* _nickname;
	NSArray* _socialProfiles;

}

@property (nonatomic,readonly) int propertyID;                                          //@synthesize propertyID=_propertyID - In the implementation block
@property (nonatomic,readonly) long long multivalueIndex;                               //@synthesize multivalueIndex=_multivalueIndex - In the implementation block
@property (nonatomic,readonly) NSString * formattedName; 
@property (nonatomic,readonly) NSString * namePrefix; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * middleName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSString * nameSuffix; 
@property (nonatomic,readonly) NSString * nickname;                                     //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,readonly) NSString * organization; 
@property (nonatomic,readonly) BOOL hasImageData;                                       //@synthesize hasImageData=_hasImageData - In the implementation block
@property (nonatomic,readonly) NSData * imageData; 
@property (nonatomic,readonly) NSData * thumbnailImageData; 
@property (nonatomic,readonly) WFContactLabeledValue * birthday; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) NSArray * dates; 
@property (nonatomic,readonly) NSArray * phoneNumbers; 
@property (nonatomic,readonly) NSArray * emailAddresses; 
@property (nonatomic,readonly) NSArray * streetAddresses; 
@property (nonatomic,readonly) NSArray * URLs; 
@property (nonatomic,readonly) NSArray * socialProfiles;                                //@synthesize socialProfiles=_socialProfiles - In the implementation block
@property (nonatomic,readonly) NSArray * instantMessageAddresses; 
@property (nonatomic,readonly) WFFileRepresentation * vCardRepresentation;              //@synthesize vCardRepresentation=_vCardRepresentation - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)labelFromINPersonHandleLabel:(id)arg1 ;
+(id)cnContactWithINPerson:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)contactWithVCardData:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3 ;
+(Class)preferredConcreteSubclass;
+(id)allContactsWithSortOrder:(long long)arg1 passingTest:(/*^block*/id)arg2 ;
+(id)allContactsWithSortOrder:(long long)arg1 ;
+(id)contactsWithName:(id)arg1 ;
+(id)contactsWithVCardData:(id)arg1 ;
+(id)addContactsChangeObserver:(/*^block*/id)arg1 ;
+(void)removeContactsChangeObserver:(id)arg1 ;
-(id)inPerson;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(NSArray *)URLs;
-(NSString *)middleName;
-(NSString *)namePrefix;
-(NSString *)nameSuffix;
-(NSString *)nickname;
-(NSDate *)modificationDate;
-(NSDate *)creationDate;
-(NSArray *)phoneNumbers;
-(NSString *)formattedName;
-(NSArray *)emailAddresses;
-(WFContactLabeledValue *)birthday;
-(NSString *)organization;
-(NSData *)imageData;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSArray *)instantMessageAddresses;
-(NSArray *)socialProfiles;
-(NSArray *)dates;
-(NSData *)thumbnailImageData;
-(WFFileRepresentation *)vCardRepresentation;
-(int)propertyID;
-(BOOL)hasImageData;
-(NSString *)wfName;
-(id)wfSerializedRepresentation;
-(BOOL)hasValueForPropertyID:(int)arg1 ;
-(id)valueForPropertyID:(int)arg1 ;
-(id)contactWithPropertyID:(int)arg1 multivalueIndex:(long long)arg2 ;
-(NSArray *)streetAddresses;
-(long long)multivalueIndex;
@end

