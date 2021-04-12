/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNContact, CNLabeledValue;

@interface MSPSharedTripContact : NSObject <NSSecureCoding> {

	NSString* _displayName;
	NSString* _originalHandle;
	CNContact* _contact;
	CNLabeledValue* _labeledValue;

}

@property (nonatomic,readonly) BOOL isPhoneNumber; 
@property (nonatomic,retain) CNContact * contact;                        //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNLabeledValue * labeledValue;              //@synthesize labeledValue=_labeledValue - In the implementation block
@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) NSString * handleForIDS; 
@property (nonatomic,readonly) NSString * displayName; 
+(BOOL)supportsSecureCoding;
+(id)_propertiesForFetching;
+(id)contactsFromCNContact:(id)arg1 matchingHandles:(id)arg2 ;
+(id)contactsFromHandles:(id)arg1 ;
+(id)contactsFromCNContact:(id)arg1 ;
+(id)contactsFromIDSHandles:(id)arg1 ;
+(void)setAdditionalKeyDescriptorsForContactFetching:(id)arg1 ;
+(id)contactsFromCNContact:(id)arg1 andIdentifiers:(id)arg2 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)_stringValue;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)description;
-(unsigned long long)hash;
-(CNLabeledValue *)labeledValue;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isPhoneNumber;
-(NSString *)displayName;
-(void)setLabeledValue:(CNLabeledValue *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithContactHandle:(id)arg1 ;
-(id)initWithContact:(id)arg1 handle:(id)arg2 ;
-(void)_populateFromContactUsingHandle:(id)arg1 ;
-(id)initWithContact:(id)arg1 labeledValue:(id)arg2 ;
-(NSString *)handleForIDS;
@end

