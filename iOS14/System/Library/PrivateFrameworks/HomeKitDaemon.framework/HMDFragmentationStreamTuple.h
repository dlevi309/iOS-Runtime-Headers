/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HAPFragmentationStream, NSString, HMFMessage, NSDate;

@interface HMDFragmentationStreamTuple : HMFObject {

	HAPFragmentationStream* _fragmentationStream;
	NSString* _objectUUID;
	HMFMessage* _lastMessage;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) HAPFragmentationStream * fragmentationStream;              //@synthesize fragmentationStream=_fragmentationStream - In the implementation block
@property (nonatomic,readonly) NSString * objectUUID;                                     //@synthesize objectUUID=_objectUUID - In the implementation block
@property (nonatomic,retain) HMFMessage * lastMessage;                                    //@synthesize lastMessage=_lastMessage - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                                   //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
+(id)tupleWithFragmentationStreamForObject:(id)arg1 delegate:(id)arg2 ;
-(void)close;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(void)setLastMessage:(HMFMessage *)arg1 ;
-(HMFMessage *)lastMessage;
-(NSString *)objectUUID;
-(id)initWithFragmentationStreamForObject:(id)arg1 delegate:(id)arg2 ;
-(HAPFragmentationStream *)fragmentationStream;
@end

