/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) ICUserIdentity * userIdentity;                                             //@synthesize userIdentity=_userIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)libraryViewWithUserIdentity:(id)arg1 ;
+(id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2 ;
+(BOOL)requiresNetwork;
+(id)preferredQueue;
-(id)propertiesForItemAtIndexPath:(id)arg1 ;
-(ICUserIdentity *)userIdentity;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setRepresentedObjects:(MPSectionedCollection *)arg1 ;
-(id)initWithUnpersonalizedContentDescriptors:(id)arg1 ;
-(NSDictionary *)itemIndexPathToOverridePropertySet;
-(MPSectionedCollection *)unpersonalizedContentDescriptors;
-(void)setProperties:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
-(MPSectionedCollection *)representedObjects;
-(id)initWithUnpersonalizedRequest:(id)arg1 unpersonalizedContentDescriptors:(id)arg2 ;
@end

