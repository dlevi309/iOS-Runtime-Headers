/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

