/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WFSerializableContent.h>

@class WFFileRepresentation, NSString, NSArray, NSData, WFContactLabeledValue, NSDate;

@interface WFContact : NSObject <WFNaming, NSCopying, NSSecureCoding, WFSerializableContent> {

	BOOL _hasImageData;
	int _propertyID;
	WFFileRepresentation* _vCardRepresentation;
	WFFileRepresentation* _fullDataVCardRepresentation;
	long long _multivalueIndex;
	NSString* _nickname;
	NSArray* _socialProfiles;

}

@property (nonatomic,readonly) int propertyID;                                                  //@synthesize propertyID=_propertyID - In the implementation block
@property (nonatomic,readonly) long long multivalueIndex;                                       //@synthesize multivalueIndex=_multivalueIndex - In the implementation block
@property (nonatomic,readonly) NSString * formattedName; 
@property (nonatomic,readonly) NSString * namePrefix; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * middleName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSString * nameSuffix; 
@property (nonatomic,readonly) NSString * nickname;                                             //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,readonly) NSString * organization; 
@property (nonatomic,readonly) BOOL hasImageData;                                               //@synthesize hasImageData=_hasImageData - In the implementation block
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
@property (nonatomic,readonly) NSArray * socialProfiles;                                        //@synthesize socialProfiles=_socialProfiles - In the implementation block
@property (nonatomic,readonly) NSArray * instantMessageAddresses; 
@property (nonatomic,readonly) WFFileRepresentation * fullDataVCardRepresentation;              //@synthesize fullDataVCardRepresentation=_fullDataVCardRepresentation - In the implementation block
@property (nonatomic,readonly) WFFileRepresentation * vCardRepresentation;                      //@synthesize vCardRepresentation=_vCardRepresentation - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cnContactWithINPerson:(id)arg1 ;
+(id)labelFromINPersonHandleLabel:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(long long)predictedTypeForHandleValue:(id)arg1 ;
+(id)contactWithVCardData:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3 ;
+(Class)preferredConcreteSubclass;
+(id)allContactsWithSortOrder:(long long)arg1 passingTest:(/*^block*/id)arg2 ;
+(id)allContactsWithSortOrder:(long long)arg1 ;
+(id)contactsWithName:(id)arg1 ;
+(id)contactsWithVCardData:(id)arg1 ;
+(id)addContactsChangeObserver:(/*^block*/id)arg1 ;
+(void)removeContactsChangeObserver:(id)arg1 ;
-(id)inPerson;
-(NSDate *)modificationDate;
-(NSArray *)instantMessageAddresses;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSArray *)dates;
-(NSString *)namePrefix;
-(NSString *)nameSuffix;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)emailAddresses;
-(NSString *)nickname;
-(WFContactLabeledValue *)birthday;
-(NSArray *)socialProfiles;
-(NSString *)wfName;
-(NSArray *)phoneNumbers;
-(NSString *)description;
-(NSString *)middleName;
-(NSDate *)creationDate;
-(Class)classForCoder;
-(NSArray *)URLs;
-(NSData *)imageData;
-(NSString *)formattedName;
-(NSData *)thumbnailImageData;
-(id)initWithCoder:(id)arg1 ;
-(WFFileRepresentation *)vCardRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)organization;
-(BOOL)hasImageData;
-(id)wfSerializedRepresentation;
-(BOOL)hasValueForPropertyID:(int)arg1 ;
-(id)valueForPropertyID:(int)arg1 ;
-(id)contactWithPropertyID:(int)arg1 multivalueIndex:(long long)arg2 ;
-(WFFileRepresentation *)fullDataVCardRepresentation;
-(id)vCardRepresentationWithFullData:(BOOL)arg1 ;
-(NSArray *)streetAddresses;
-(int)propertyID;
-(long long)multivalueIndex;
@end

