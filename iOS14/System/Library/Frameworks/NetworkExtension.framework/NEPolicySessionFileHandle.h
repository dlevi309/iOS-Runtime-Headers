/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEFileHandle.h>

@class NSString;

@interface NEPolicySessionFileHandle : NEFileHandle {

	NSString* _name;

}

@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(id)initFromDictionary:(id)arg1 ;
-(id)initWithPolicySession:(id)arg1 name:(id)arg2 ;
-(NSString *)name;
-(id)description;
-(id)dictionary;
-(id)initWithPolicySession:(id)arg1 ;
-(unsigned long long)type;
@end

