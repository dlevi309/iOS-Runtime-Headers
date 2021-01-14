/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

#import <InAppMessages/InAppMessages-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IAMTriggerKey : NSObject <NSCopying> {

	NSString* _name;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * nameSpacedKeyName; 
+(id)nameSpacedKeyNameForName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)initWithName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(NSString *)nameSpacedKeyName;
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

