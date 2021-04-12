/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

