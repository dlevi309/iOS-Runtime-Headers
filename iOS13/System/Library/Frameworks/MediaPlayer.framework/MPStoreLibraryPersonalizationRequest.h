/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelRequest.h>
#import <libobjc.A.dylib/MPUserIdentityConsuming.h>

@class NSMutableDictionary, ICUserIdentity, MPSectionedCollection, NSDictionary, NSString;

@interface MPStoreLibraryPersonalizationRequest : MPModelRequest <MPUserIdentityConsuming> {

	NSMutableDictionary* _itemIndexPathToOverridePropertySet;
	ICUserIdentity* _userIdentity;
	MPSectionedCollection* _unpersonalizedContentDescriptors;
	MPSectionedCollection* _representedObjects;

}

@property (nonatomic,copy,readonly) NSDictionary * itemIndexPathToOverridePropertySet; 
@property (nonatomic,readonly) MPSectionedCollection * unpersonalizedContentDescriptors;              //@synthesize unpersonalizedContentDescriptors=_unpersonalizedContentDescriptors - In the implementation block
@property (nonatomic,retain) MPSectionedCollection * representedObjects;                              //@synthesize representedObjects=_representedObjects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) ICUserIdentity * userIdentity;                                             //@synthesize userIdentity=_userIdentity - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)requiresNetwork;
+(id)preferredQueue;
+(id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2 ;
+(id)libraryViewWithUserIdentity:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ICUserIdentity *)userIdentity;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPSectionedCollection *)unpersonalizedContentDescriptors;
-(NSDictionary *)itemIndexPathToOverridePropertySet;
-(id)initWithUnpersonalizedContentDescriptors:(id)arg1 ;
-(id)initWithUnpersonalizedRequest:(id)arg1 unpersonalizedContentDescriptors:(id)arg2 ;
-(id)propertiesForItemAtIndexPath:(id)arg1 ;
-(void)setProperties:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(MPSectionedCollection *)representedObjects;
-(void)setRepresentedObjects:(MPSectionedCollection *)arg1 ;
@end

