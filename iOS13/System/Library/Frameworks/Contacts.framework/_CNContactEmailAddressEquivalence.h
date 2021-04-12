/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/_CNContactHandleStringEquivalenceStrategy.h>

@class NSString;

@interface _CNContactEmailAddressEquivalence : NSObject <_CNContactHandleStringEquivalenceStrategy> {

	NSString* _rawString;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)indexKeyForString:(id)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(BOOL)isEquivalentToString:(id)arg1 strict:(BOOL*)arg2 ;
@end

