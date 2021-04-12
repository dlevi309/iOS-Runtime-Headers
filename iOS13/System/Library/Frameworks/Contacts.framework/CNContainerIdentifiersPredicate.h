/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNCDContainerPredicate.h>

@class NSArray, NSString;

@interface CNContainerIdentifiersPredicate : CNPredicate <CNCDContainerPredicate> {

	NSArray* _identifiers;

}

@property (nonatomic,copy,readonly) NSArray * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)identifiers;
-(id)initWithIdentifiers:(id)arg1 ;
-(id)cn_coreDataPredicate;
-(id)cn_topLevelFilter;
-(id)cn_persistenceFilterRequest;
@end

