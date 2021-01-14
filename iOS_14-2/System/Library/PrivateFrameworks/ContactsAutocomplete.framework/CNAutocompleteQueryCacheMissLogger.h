/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteQueryCacheMissLogging.h>

@class NSArray, NSString;

@interface CNAutocompleteQueryCacheMissLogger : NSObject <CNAutocompleteQueryCacheMissLogging> {

	NSArray* _loggers;

}

@property (copy) NSArray * loggers;                                 //@synthesize loggers=_loggers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)loggers;
-(id)initWithLoggers:(id)arg1 ;
-(void)didReturnCacheFalseNegatives:(id)arg1 ;
-(void)didReturnCacheFalsePositives:(id)arg1 ;
-(void)setLoggers:(NSArray *)arg1 ;
@end

