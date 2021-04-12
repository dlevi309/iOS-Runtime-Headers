/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSMutableArray *)phoneNumbers;
-(NSMutableArray *)unknown;
-(NSMutableArray *)emailAddresses;
-(id)build;
-(void)setEmailAddresses:(NSMutableArray *)arg1 ;
-(void)setUnknown:(NSMutableArray *)arg1 ;
-(void)setPhoneNumbers:(NSMutableArray *)arg1 ;
-(void)addEmailAddress:(id)arg1 ;
-(void)addPhoneNumber:(id)arg1 ;
-(void)addUnknown:(id)arg1 ;
@end

