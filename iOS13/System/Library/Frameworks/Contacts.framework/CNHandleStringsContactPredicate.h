/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNPredicate.h>

@class NSArray;

@interface CNHandleStringsContactPredicate : CNPredicate {

	NSArray* _handleStrings;
	NSArray* _containerIdentifiers;

}

@property (nonatomic,copy,readonly) NSArray * handleStrings;                     //@synthesize handleStrings=_handleStrings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * containerIdentifiers;              //@synthesize containerIdentifiers=_containerIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)shortDebugDescription;
-(/*^block*/id)cn_resultTransformWithMatchInfos:(id)arg1 ;
-(NSArray *)containerIdentifiers;
-(id)initWithHandleStrings:(id)arg1 containerIdentifiers:(id)arg2 ;
-(id)initWithHandleStrings:(id)arg1 ;
-(NSArray *)handleStrings;
@end

