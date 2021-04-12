/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFPeerInfoMutating.h>

@class AFPeerInfo, NSString;

@interface _AFPeerInfoMutation : NSObject <AFPeerInfoMutating> {

	AFPeerInfo* _baseModel;
	BOOL _isDeviceOwnedByCurrentUser;
	NSString* _idsIdentifier;
	NSString* _idsDeviceUniqueIdentifier;
	NSString* _rapportEffectiveIdentifier;
	NSString* _mediaSystemIdentifier;
	NSString* _mediaRouteIdentifier;
	BOOL _isCommunalDevice;
	NSString* _roomName;
	NSString* _name;
	NSString* _productType;
	NSString* _buildVersion;
	NSString* _userInterfaceIdiom;
	NSString* _aceVersion;
	struct {
		unsigned isDirty : 1;
		unsigned hasIsDeviceOwnedByCurrentUser : 1;
		unsigned hasIdsIdentifier : 1;
		unsigned hasIdsDeviceUniqueIdentifier : 1;
		unsigned hasRapportEffectiveIdentifier : 1;
		unsigned hasMediaSystemIdentifier : 1;
		unsigned hasMediaRouteIdentifier : 1;
		unsigned hasIsCommunalDevice : 1;
		unsigned hasRoomName : 1;
		unsigned hasName : 1;
		unsigned hasProductType : 1;
		unsigned hasBuildVersion : 1;
		unsigned hasUserInterfaceIdiom : 1;
		unsigned hasAceVersion : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInterfaceIdiom:(id)arg1 ;
-(id)init;
-(void)setProductType:(id)arg1 ;
-(void)setRoomName:(id)arg1 ;
-(void)setMediaRouteIdentifier:(id)arg1 ;
-(void)setBuildVersion:(id)arg1 ;
-(void)setIdsIdentifier:(id)arg1 ;
-(id)generate;
-(void)setName:(id)arg1 ;
-(void)setMediaSystemIdentifier:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setAceVersion:(id)arg1 ;
-(void)setIsDeviceOwnedByCurrentUser:(BOOL)arg1 ;
-(void)setIdsDeviceUniqueIdentifier:(id)arg1 ;
-(void)setRapportEffectiveIdentifier:(id)arg1 ;
-(void)setIsCommunalDevice:(BOOL)arg1 ;
@end

