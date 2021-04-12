/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteSourceInclusionPolicy.h>

@class NSString;

@interface _CNAutocompleteEntitlementSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy>

@property (readonly) BOOL includeContacts; 
@property (readonly) BOOL includeRecents; 
@property (readonly) BOOL includeSuggestions; 
@property (readonly) BOOL includeLocalExtensions; 
@property (readonly) BOOL includeDirectoryServers; 
@property (readonly) BOOL includeCalendarServers; 
@property (readonly) BOOL includeSupplementalResults; 
@property (readonly) BOOL includePredictions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)includeContacts;
-(BOOL)includeSuggestions;
-(BOOL)includeRecents;
-(BOOL)includeLocalExtensions;
-(BOOL)includeDirectoryServers;
-(BOOL)includeCalendarServers;
-(BOOL)includePredictions;
-(BOOL)includeSupplementalResults;
@end

