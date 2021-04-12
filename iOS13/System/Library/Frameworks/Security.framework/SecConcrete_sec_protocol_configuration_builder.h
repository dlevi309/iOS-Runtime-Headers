/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/

#import <Security/Security-Structs.h>
#import <libobjc.A.dylib/OS_sec_protocol_configuration_builder.h>

@class NSString;

@interface SecConcrete_sec_protocol_configuration_builder : NSObject <OS_sec_protocol_configuration_builder> {

	CFDictionaryRef dictionary;
	BOOL is_apple;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithDictionary:(CFDictionaryRef)arg1 andInternalFlag:(BOOL)arg2 ;
@end

