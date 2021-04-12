/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@class NSMutableArray;

@interface CNHandleStringsClassificationBuilder : NSObject {

	NSMutableArray* _emailAddresses;
	NSMutableArray* _phoneNumbers;
	NSMutableArray* _unknown;

}

@property (nonatomic,retain) NSMutableArray * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,retain) NSMutableArray * phoneNumbers;                //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (nonatomic,retain) NSMutableArray * unknown;                     //@synthesize unknown=_unknown - In the implementation block
-(void)setEmailAddresses:(NSMutableArray *)arg1 ;
-(id)build;
-(NSMutableArray *)unknown;
-(id)init;
-(void)setPhoneNumbers:(NSMutableArray *)arg1 ;
-(void)addUnknown:(id)arg1 ;
-(NSMutableArray *)emailAddresses;
-(void)setUnknown:(NSMutableArray *)arg1 ;
-(void)addEmailAddress:(id)arg1 ;
-(NSMutableArray *)phoneNumbers;
-(void)addPhoneNumber:(id)arg1 ;
@end

