/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteSourceInclusionPolicy.h>

@class NSString;

@interface _CNAutocompleteMutableSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy> {

	BOOL _includeContacts;
	BOOL _includeRecents;
	BOOL _includeSuggestions;
	BOOL _includeLocalExtensions;
	BOOL _includeDirectoryServers;
	BOOL _includeCalendarServers;
	BOOL _includeSupplementalResults;
	BOOL _includePredictions;

}

@property (assign) BOOL includeContacts;                            //@synthesize includeContacts=_includeContacts - In the implementation block
@property (assign) BOOL includeRecents;                             //@synthesize includeRecents=_includeRecents - In the implementation block
@property (assign) BOOL includeSuggestions;                         //@synthesize includeSuggestions=_includeSuggestions - In the implementation block
@property (assign) BOOL includeLocalExtensions;                     //@synthesize includeLocalExtensions=_includeLocalExtensions - In the implementation block
@property (assign) BOOL includeDirectoryServers;                    //@synthesize includeDirectoryServers=_includeDirectoryServers - In the implementation block
@property (assign) BOOL includeCalendarServers;                     //@synthesize includeCalendarServers=_includeCalendarServers - In the implementation block
@property (assign) BOOL includeSupplementalResults;                 //@synthesize includeSupplementalResults=_includeSupplementalResults - In the implementation block
@property (assign) BOOL includePredictions;                         //@synthesize includePredictions=_includePredictions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)includeContacts;
-(BOOL)includeSuggestions;
-(void)setIncludePredictions:(BOOL)arg1 ;
-(void)setIncludeCalendarServers:(BOOL)arg1 ;
-(BOOL)includeRecents;
-(void)setIncludeRecents:(BOOL)arg1 ;
-(void)setIncludeContacts:(BOOL)arg1 ;
-(void)setIncludeSuggestions:(BOOL)arg1 ;
-(void)setIncludeDirectoryServers:(BOOL)arg1 ;
-(void)setIncludeLocalExtensions:(BOOL)arg1 ;
-(BOOL)includeLocalExtensions;
-(BOOL)includeDirectoryServers;
-(BOOL)includeCalendarServers;
-(BOOL)includePredictions;
-(BOOL)includeSupplementalResults;
-(void)setIncludeSupplementalResults:(BOOL)arg1 ;
@end

