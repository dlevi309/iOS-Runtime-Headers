/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEFileHandle.h>

@class NSString;

@interface NEPolicySessionFileHandle : NEFileHandle {

	NSString* _name;

}

@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(id)description;
-(NSString *)name;
-(unsigned long long)type;
-(id)dictionary;
-(id)initFromDictionary:(id)arg1 ;
-(id)initWithPolicySession:(id)arg1 name:(id)arg2 ;
-(id)initWithPolicySession:(id)arg1 ;
@end

