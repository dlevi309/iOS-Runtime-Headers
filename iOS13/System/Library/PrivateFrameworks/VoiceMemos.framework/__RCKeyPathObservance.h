/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <libobjc.A.dylib/RCKeyPathObservance.h>

@protocol NSObject;
@class NSArray, NSString;

@interface __RCKeyPathObservance : NSObject <RCKeyPathObservance> {

	id<NSObject> _object;
	NSArray* _keyPaths;
	/*^block*/id _observer;

}

@property (assign,nonatomic,__weak) id<NSObject> object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) NSArray * keyPaths;                      //@synthesize keyPaths=_keyPaths - In the implementation block
@property (nonatomic,copy) id observer;                               //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<NSObject>)object;
-(id)observer;
-(void)setObject:(id<NSObject>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)remove;
-(void)setObserver:(id)arg1 ;
-(NSArray *)keyPaths;
-(void)setKeyPaths:(NSArray *)arg1 ;
@end

