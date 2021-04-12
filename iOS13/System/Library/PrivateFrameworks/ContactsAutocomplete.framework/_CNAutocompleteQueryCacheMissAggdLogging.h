/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteQueryCacheMissLogging.h>

@class CNAutocompleteAggdProbe, NSString;

@interface _CNAutocompleteQueryCacheMissAggdLogging : NSObject <CNAutocompleteQueryCacheMissLogging> {

	CNAutocompleteAggdProbe* _probe;

}

@property (readonly) CNAutocompleteAggdProbe * probe;               //@synthesize probe=_probe - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)didReturnCacheFalseNegatives:(id)arg1 ;
-(void)didReturnCacheFalsePositives:(id)arg1 ;
-(id)initWithProbe:(id)arg1 ;
-(CNAutocompleteAggdProbe *)probe;
@end

