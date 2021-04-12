/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteSourceInclusionPolicy.h>

@class NSString;

@interface _CNAutocompleteEntitlementSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy>

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
-(BOOL)includeRecents;
-(BOOL)includeContacts;
-(BOOL)includeSuggestions;
-(BOOL)includeLocalExtensions;
-(BOOL)includeDirectoryServers;
-(BOOL)includeCalendarServers;
-(BOOL)includePredictions;
-(BOOL)includeSupplementalResults;
@end

