/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTCacheableResource.h>

@class NSArray, NSString;

@interface AVTAggregateCacheableResource : NSObject <AVTCacheableResource> {

	NSArray* _cacheableResources;

}

@property (nonatomic,readonly) NSArray * cacheableResources;              //@synthesize cacheableResources=_cacheableResources - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)requiresEncryption;
-(id)volatileIdentifierForScope:(id)arg1 ;
-(unsigned long long)costForScope:(id)arg1 ;
-(id)persistentIdentifierForScope:(id)arg1 ;
-(NSArray *)cacheableResources;
-(id)identifierForScope:(id)arg1 persistent:(BOOL)arg2 ;
-(id)initWithCacheableResources:(id)arg1 ;
@end

