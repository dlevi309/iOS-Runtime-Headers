/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
*/

@class NSUUID, NSArray, NSSet;


@protocol PSBrokerCapabilities <NSObject>
@property (readonly) NSUUID * identifier; 
@property (copy,readonly) NSArray * exportedTopics; 
@property (copy,readonly) NSSet * supportedTransportIdentifiers; 
@required
-(NSUUID *)identifier;
-(NSSet *)supportedTransportIdentifiers;
-(NSArray *)exportedTopics;

@end

