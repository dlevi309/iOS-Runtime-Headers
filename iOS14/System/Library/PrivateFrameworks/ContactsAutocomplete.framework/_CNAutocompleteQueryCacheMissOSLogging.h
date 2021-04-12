/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteQueryCacheMissLogging.h>

@protocol OS_os_log;
@class NSObject, NSString;

@interface _CNAutocompleteQueryCacheMissOSLogging : NSObject <CNAutocompleteQueryCacheMissLogging> {

	NSObject*<OS_os_log> _os_log;

}

@property (readonly) NSObject*<OS_os_log> os_log;                   //@synthesize os_log=_os_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_os_log>)os_log;
-(void)didReturnCacheFalseNegatives:(id)arg1 ;
-(void)didReturnCacheFalsePositives:(id)arg1 ;
@end

