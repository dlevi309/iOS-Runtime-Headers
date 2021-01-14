/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


#import <EmailFoundation/EmailFoundation-Structs.h>
@class EFQueue, NSMutableSet;

@interface EFResourcePool : NSObject {

	os_unfair_lock_s _handleResourceLock;
	unsigned long long _uncreatedResourcesCount;
	EFQueue* _activeResources;
	NSMutableSet* _inactiveResources;

}

@property (assign,nonatomic) unsigned long long uncreatedResourcesCount;              //@synthesize uncreatedResourcesCount=_uncreatedResourcesCount - In the implementation block
@property (nonatomic,readonly) EFQueue * activeResources;                             //@synthesize activeResources=_activeResources - In the implementation block
@property (nonatomic,readonly) NSMutableSet * inactiveResources;                      //@synthesize inactiveResources=_inactiveResources - In the implementation block
-(NSMutableSet *)inactiveResources;
-(EFQueue *)activeResources;
-(void)releaseResource:(id)arg1 ;
-(id)acquireResource;
-(id)initWithCount:(unsigned long long)arg1 ;
-(void)setUncreatedResourcesCount:(unsigned long long)arg1 ;
-(unsigned long long)uncreatedResourcesCount;
@end

