/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteSearch.h>

@class CRRecentContactsLibrary, NSString;

@interface CNAutocompleteRecentsSearch : NSObject <CNAutocompleteSearch> {

	CRRecentContactsLibrary* _library;

}

@property (nonatomic,retain) CRRecentContactsLibrary * library;              //@synthesize library=_library - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CRRecentContactsLibrary *)library;
-(void)setLibrary:(CRRecentContactsLibrary *)arg1 ;
-(id)executeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCoreRecentContactsLibrary:(id)arg1 ;
-(id)autocompleteResultsForRecentContacts:(id)arg1 request:(id)arg2 ;
@end

