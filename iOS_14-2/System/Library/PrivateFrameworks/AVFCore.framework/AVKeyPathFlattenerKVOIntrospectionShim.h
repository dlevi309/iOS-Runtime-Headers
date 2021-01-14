/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVKVOIntrospection.h>
#import <AVFCore/AVCallbackCancellation.h>

@protocol AVKVOIntrospectionAVCallbackCancellation;
@class NSObject, NSString;

@interface AVKeyPathFlattenerKVOIntrospectionShim : NSObject <AVKVOIntrospection, AVCallbackCancellation> {

	NSObject* _observedObject;
	id<AVKVOIntrospection><AVCallbackCancellation> _realNotifier;

}

@property (nonatomic,readonly) NSObject * observedObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject *)observedObject;
-(id)initWithObservedObject:(id)arg1 realNotifier:(id)arg2 ;
-(void)cancelCallbacks;
-(void)dealloc;
@end

