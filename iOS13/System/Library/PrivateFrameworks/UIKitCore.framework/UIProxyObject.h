/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface UIProxyObject : NSObject <NSCoding> {

	NSString* proxiedObjectIdentifier;

}
+(void)addMappingFromIdentifier:(id)arg1 toObject:(id)arg2 forCoder:(id)arg3 ;
+(void)addMappings:(id)arg1 forCoder:(id)arg2 ;
+(void)removeMappingsForCoder:(id)arg1 ;
+(CFDictionaryRef)proxyDecodingMap;
+(id)mappedObjectForCoder:(id)arg1 withIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)proxiedObjectIdentifier;
-(void)setProxiedObjectIdentifier:(id)arg1 ;
@end

