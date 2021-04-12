/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class HMSetupAccessoryPayload, HMAddAccessoryRequest, HMAccessoryOwnershipToken, HMSetupAccessoryBrowsingRequest, NSString;

@interface HMAccessorySetupPayload : NSObject {

	HMSetupAccessoryPayload* _internalSetupPayload;
	HMAddAccessoryRequest* _addRequest;
	HMAccessoryOwnershipToken* _ownershipToken;
	HMSetupAccessoryBrowsingRequest* _accessoryBrowsingRequest;
	NSString* _suggestedRoomName;

}

@property (retain) HMSetupAccessoryPayload * internalSetupPayload;                          //@synthesize internalSetupPayload=_internalSetupPayload - In the implementation block
@property (nonatomic,readonly) HMAddAccessoryRequest * addRequest;                          //@synthesize addRequest=_addRequest - In the implementation block
@property (nonatomic,readonly) HMAccessoryOwnershipToken * ownershipToken;                  //@synthesize ownershipToken=_ownershipToken - In the implementation block
@property (retain) HMSetupAccessoryBrowsingRequest * accessoryBrowsingRequest;              //@synthesize accessoryBrowsingRequest=_accessoryBrowsingRequest - In the implementation block
@property (copy) NSString * suggestedRoomName;                                              //@synthesize suggestedRoomName=_suggestedRoomName - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(HMAccessoryOwnershipToken *)ownershipToken;
-(void)setAccessoryBrowsingRequest:(HMSetupAccessoryBrowsingRequest *)arg1 ;
-(HMSetupAccessoryBrowsingRequest *)accessoryBrowsingRequest;
-(NSString *)suggestedRoomName;
-(void)setSuggestedRoomName:(NSString *)arg1 ;
-(id)initWithAddRequest:(id)arg1 url:(id)arg2 ownershipToken:(id)arg3 ;
-(HMSetupAccessoryPayload *)internalSetupPayload;
-(HMAddAccessoryRequest *)addRequest;
-(id)initWithURL:(id)arg1 ownershipToken:(id)arg2 ;
-(BOOL)_parseURLForBrowsingRequest:(id)arg1 ;
-(void)setInternalSetupPayload:(HMSetupAccessoryPayload *)arg1 ;
@end

