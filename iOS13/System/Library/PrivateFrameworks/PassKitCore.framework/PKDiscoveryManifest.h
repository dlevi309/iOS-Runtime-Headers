/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)version;
-(NSArray *)rules;
-(id)initWithVersion:(long long)arg1 rules:(id)arg2 discoveryItems:(id)arg3 engagementMessagesMetadata:(id)arg4 ;
-(NSArray *)discoveryItems;
-(PKDiscoveryMessagesMetadata *)messagesMetadata;
@end

