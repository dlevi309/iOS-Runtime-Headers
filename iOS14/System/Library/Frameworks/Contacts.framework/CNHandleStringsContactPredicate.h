/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)shortDebugDescription;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(/*^block*/id)cn_resultTransformWithMatchInfos:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)containerIdentifiers;
-(id)initWithHandleStrings:(id)arg1 containerIdentifiers:(id)arg2 ;
-(NSArray *)handleStrings;
-(id)initWithHandleStrings:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

