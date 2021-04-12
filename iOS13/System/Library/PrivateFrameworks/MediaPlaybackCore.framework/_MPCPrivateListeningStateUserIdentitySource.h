/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MPCPrivateListeningStateSource.h>

@class ICUserIdentity, NSNumber;

@interface _MPCPrivateListeningStateUserIdentitySource : MPCPrivateListeningStateSource {

	ICUserIdentity* _userIdentity;
	NSNumber* _cachedValue;

}
+(BOOL)supportsSecureCoding;
+(id)sharedAccessQueue;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)currentValue;
-(id)_initWithUserIdentity:(id)arg1 ;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg1 ;
-(void)_loadCurrentValueFromIdentityProperties;
@end

