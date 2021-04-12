/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)change;
-(NSObject *)object;
-(NSString *)keyPath;
-(id)initWithKeyPath:(id)arg1 ofObject:(id)arg2 withChange:(id)arg3 ;
@end

