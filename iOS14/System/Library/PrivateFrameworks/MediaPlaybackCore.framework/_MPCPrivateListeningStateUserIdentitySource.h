/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)sourceType;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithUserIdentity:(id)arg1 ;
-(id)currentValue;
-(void)dealloc;
-(void)_loadCurrentValueFromIdentityProperties;
@end

