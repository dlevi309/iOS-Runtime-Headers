/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKInvalidateObservable.h>

@class NSURL, NSString;

@interface PKDirectoryCoordinator : NSObject <PKInvalidateObservable> {

	os_unfair_lock_s _lock;
	AB _invalidated;
	NSURL* _url;

}

@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInvalidated;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)performCoordinatedAction:(/*^block*/id)arg1 ;
-(void)invalidate;
@end

