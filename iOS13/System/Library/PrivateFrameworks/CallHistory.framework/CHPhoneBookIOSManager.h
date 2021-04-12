/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)fetchAndCacheContactIdentifiersForCalls:(id)arg1 ;
-(id)fetchCNContactsMatchingPredicate:(id)arg1 keysToKetch:(id)arg2 error:(id*)arg3 ;
-(id)fetchCNContact:(id)arg1 countryCode:(id)arg2 isEmail:(BOOL)arg3 ;
-(CNContactStore *)fContactsStore;
-(id)fetchContactIdentifiersForHandles:(id)arg1 error:(id*)arg2 ;
-(id)getRecordId:(id)arg1 countryCode:(id)arg2 isEmail:(BOOL)arg3 ;
-(id)fetchFullCNContactForContactIdentifier:(id)arg1 isEmail:(BOOL)arg2 ;
-(id)getPersonsNameForContact:(id)arg1 ;
-(id)getLocalizedCallerIdLabelForContact:(id)arg1 forCallerId:(id)arg2 withCallerIdIsEmail:(BOOL)arg3 ;
-(BOOL)isABContactASuggestion;
-(void)setFContactsStore:(CNContactStore *)arg1 ;
@end

