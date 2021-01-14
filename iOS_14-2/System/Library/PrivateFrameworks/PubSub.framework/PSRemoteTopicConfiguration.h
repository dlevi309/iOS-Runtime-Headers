/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSSet;

@interface PSRemoteTopicConfiguration : HMFObject {

	NSString* _name;
	NSSet* _supportedTransportIdentifiers;

}

@property (readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSSet * supportedTransportIdentifiers;              //@synthesize supportedTransportIdentifiers=_supportedTransportIdentifiers - In the implementation block
-(NSString *)name;
-(NSSet *)supportedTransportIdentifiers;
-(id)initWithTopicName:(id)arg1 supportedTransportIdentifiers:(id)arg2 ;
@end

