/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteNetworkActivityPolicy.h>

@class NSString;

@interface CNAutocompleteNetworkActivityThrottlingPolicy : NSObject <CNAutocompleteNetworkActivityPolicy> {

	unsigned long long _lengthOfString;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithString:(id)arg1 ;
-(BOOL)shouldSearchServers;
-(double)delayBeforeBeginningNetworkActivity;
@end

