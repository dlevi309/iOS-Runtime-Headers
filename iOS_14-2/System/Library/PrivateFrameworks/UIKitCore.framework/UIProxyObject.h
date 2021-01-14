/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface UIProxyObject : NSObject <NSCoding> {

	NSString* proxiedObjectIdentifier;

}
+(void)addMappings:(id)arg1 forCoder:(id)arg2 ;
+(void)removeMappingsForCoder:(id)arg1 ;
+(void)addMappingFromIdentifier:(id)arg1 toObject:(id)arg2 forCoder:(id)arg3 ;
+(CFDictionaryRef)proxyDecodingMap;
+(id)mappedObjectForCoder:(id)arg1 withIdentifier:(id)arg2 ;
-(void)setProxiedObjectIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)proxiedObjectIdentifier;
@end

