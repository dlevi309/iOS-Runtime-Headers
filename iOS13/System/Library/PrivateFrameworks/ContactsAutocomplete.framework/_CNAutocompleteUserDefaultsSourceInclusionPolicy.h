/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteSourceInclusionPolicy.h>

@class CNUserDefaults, NSString;

@interface _CNAutocompleteUserDefaultsSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy> {

	CNUserDefaults* _userDefaults;

}

@property (readonly) CNUserDefaults * userDefaults;                 //@synthesize userDefaults=_userDefaults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL includeContacts; 
@property (readonly) BOOL includeRecents; 
@property (readonly) BOOL includeSuggestions; 
@property (readonly) BOOL includeLocalExtensions; 
@property (readonly) BOOL includeDirectoryServers; 
@property (readonly) BOOL includeCalendarServers; 
@property (readonly) BOOL includeSupplementalResults; 
@property (readonly) BOOL includePredictions; 
-(CNUserDefaults *)userDefaults;
-(BOOL)includeRecents;
-(BOOL)includeContacts;
-(BOOL)includeSuggestions;
-(id)initWithUserDefaults:(id)arg1 ;
-(BOOL)includeLocalExtensions;
-(BOOL)includeDirectoryServers;
-(BOOL)includeCalendarServers;
-(BOOL)includePredictions;
-(BOOL)includeSupplementalResults;
@end

