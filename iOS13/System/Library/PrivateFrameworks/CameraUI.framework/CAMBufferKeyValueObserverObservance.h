/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMBufferObservance.h>

@class NSObject, NSString;

@interface CAMBufferKeyValueObserverObservance : CAMBufferObservance {

	NSObject* _object;
	NSString* _keyPath;

}

@property (nonatomic,__weak,readonly) NSObject * object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;               //@synthesize keyPath=_keyPath - In the implementation block
-(NSObject *)object;
-(NSString *)keyPath;
-(BOOL)shouldBeFulfilledByChange:(id)arg1 ;
-(void)setupObservanceForBuffer:(id)arg1 ;
-(void)teardownObservanceForBuffer:(id)arg1 ;
-(id)initWithKeyPath:(id)arg1 ofObject:(id)arg2 withPredicate:(/*^block*/id)arg3 removedOnceEnabled:(BOOL)arg4 ;
@end

