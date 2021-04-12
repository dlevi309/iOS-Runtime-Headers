/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXProgrammaticNavigationDestination;

@interface PXProgrammaticNavigationRequest : NSObject {

	PXProgrammaticNavigationDestination* _destination;
	unsigned long long _options;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) PXProgrammaticNavigationDestination * destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                     //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)init;
-(unsigned long long)options;
-(id)completionHandler;
-(id)description;
-(id)initWithDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancel;
-(PXProgrammaticNavigationDestination *)destination;
@end

