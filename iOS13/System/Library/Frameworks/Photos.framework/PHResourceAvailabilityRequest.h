/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAvailabilityRequest.h>

@protocol PLResourceIdentity;
@interface PHResourceAvailabilityRequest : PHAvailabilityRequest {

	id<PLResourceIdentity> _resourceIdentity;

}

@property (nonatomic,readonly) id<PLResourceIdentity> resourceIdentity;              //@synthesize resourceIdentity=_resourceIdentity - In the implementation block
-(id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2 ;
-(id)plistDictionary;
-(id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 resourceIdentity:(id)arg3 ;
-(id<PLResourceIdentity>)resourceIdentity;
@end

