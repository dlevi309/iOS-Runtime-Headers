/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, PKDiscoveryMessagesMetadata;

@interface PKDiscoveryManifest : NSObject <NSSecureCoding> {

	long long _version;
	NSArray* _rules;
	NSArray* _discoveryItems;
	PKDiscoveryMessagesMetadata* _messagesMetadata;

}

@property (nonatomic,readonly) long long version;                                           //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSArray * rules;                                             //@synthesize rules=_rules - In the implementation block
@property (nonatomic,readonly) NSArray * discoveryItems;                                    //@synthesize discoveryItems=_discoveryItems - In the implementation block
@property (nonatomic,readonly) PKDiscoveryMessagesMetadata * messagesMetadata;              //@synthesize messagesMetadata=_messagesMetadata - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)manifestFromURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)discoveryItems;
-(PKDiscoveryMessagesMetadata *)messagesMetadata;
-(id)initWithVersion:(long long)arg1 rules:(id)arg2 discoveryItems:(id)arg3 engagementMessagesMetadata:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)rules;
-(long long)version;
@end

