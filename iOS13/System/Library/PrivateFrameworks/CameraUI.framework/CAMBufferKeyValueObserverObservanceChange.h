/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMBufferObservanceChange.h>

@class NSString, NSObject, NSDictionary;

@interface CAMBufferKeyValueObserverObservanceChange : CAMBufferObservanceChange {

	NSString* _keyPath;
	NSObject* _object;
	NSDictionary* _change;

}

@property (nonatomic,copy,readonly) NSString * keyPath;                 //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,__weak,readonly) NSObject * object;                //@synthesize object=_object - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * change;              //@synthesize change=_change - In the implementation block
-(NSObject *)object;
-(NSString *)keyPath;
-(NSDictionary *)change;
-(id)initWithKeyPath:(id)arg1 ofObject:(id)arg2 withChange:(id)arg3 ;
@end

