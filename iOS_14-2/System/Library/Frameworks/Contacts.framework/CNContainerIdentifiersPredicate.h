/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithIdentifiers:(id)arg1 ;
-(NSArray *)identifiers;
-(id)cn_coreDataPredicate;
-(id)cn_topLevelFilter;
-(id)cn_persistenceFilterRequest;
@end

