/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCount:(unsigned long long)arg1 ;
-(EFQueue *)activeResources;
-(id)acquireResource;
-(void)releaseResource:(id)arg1 ;
-(unsigned long long)uncreatedResourcesCount;
-(void)setUncreatedResourcesCount:(unsigned long long)arg1 ;
-(NSMutableSet *)inactiveResources;
@end

