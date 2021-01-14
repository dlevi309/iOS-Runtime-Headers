/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <libobjc.A.dylib/CHPhoneBookManagerProtocol.h>

@class CNContactStore, NSString;

@interface CHPhoneBookIOSManager : NSObject <CHPhoneBookManagerProtocol> {

	CNContactStore* _fContactsStore;

}

@property (nonatomic,retain) CNContactStore * fContactsStore;              //@synthesize fContactsStore=_fContactsStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)get;
-(id)getPersonsNameForContact:(id)arg1 ;
-(id)init;
-(id)getRecordId:(id)arg1 countryCode:(id)arg2 isEmail:(BOOL)arg3 ;
-(id)fetchFullCNContactForContactIdentifier:(id)arg1 isEmail:(BOOL)arg2 ;
-(id)fetchContactIdentifiersForHandles:(id)arg1 error:(id*)arg2 ;
-(id)getLocalizedCallerIdLabelForContact:(id)arg1 forCallerId:(id)arg2 withCallerIdIsEmail:(BOOL)arg3 ;
-(void)fetchAndCacheContactIdentifiersForCalls:(id)arg1 ;
-(BOOL)isABContactASuggestion;
-(CNContactStore *)fContactsStore;
-(void)setFContactsStore:(CNContactStore *)arg1 ;
-(id)fetchCNContactsMatchingPredicate:(id)arg1 keysToKetch:(id)arg2 error:(id*)arg3 ;
-(id)fetchCNContact:(id)arg1 countryCode:(id)arg2 isEmail:(BOOL)arg3 ;
@end

