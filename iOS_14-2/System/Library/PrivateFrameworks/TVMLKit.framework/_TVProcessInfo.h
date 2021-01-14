/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


#import <TVMLKit/TVMLKit-Structs.h>
@interface _TVProcessInfo : NSObject {

	BOOL _hasPrivateEntitlement;
	BOOL _hasiTunesAPIEntitlement;
	BOOL _hasiTunesStoreEntitlement;
	SecTaskRef _currentTask;

}

@property (assign,nonatomic) SecTaskRef currentTask;                        //@synthesize currentTask=_currentTask - In the implementation block
@property (nonatomic,readonly) BOOL hasPrivateEntitlement;                  //@synthesize hasPrivateEntitlement=_hasPrivateEntitlement - In the implementation block
@property (nonatomic,readonly) BOOL hasiTunesAPIEntitlement;                //@synthesize hasiTunesAPIEntitlement=_hasiTunesAPIEntitlement - In the implementation block
@property (nonatomic,readonly) BOOL hasiTunesStoreEntitlement;              //@synthesize hasiTunesStoreEntitlement=_hasiTunesStoreEntitlement - In the implementation block
+(id)currentProcessInfo;
-(id)init;
-(void)setCurrentTask:(SecTaskRef)arg1 ;
-(BOOL)boolValueForEntitlement:(id)arg1 ;
-(SecTaskRef)currentTask;
-(id)valueForEntitlement:(id)arg1 ;
-(void)dealloc;
-(BOOL)valueForEntitlement:(id)arg1 containsObject:(id)arg2 ;
-(BOOL)hasPrivateEntitlement;
-(BOOL)hasiTunesAPIEntitlement;
-(BOOL)hasiTunesStoreEntitlement;
@end

