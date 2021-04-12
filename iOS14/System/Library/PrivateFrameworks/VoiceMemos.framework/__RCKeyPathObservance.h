/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setKeyPaths:(NSArray *)arg1 ;
-(void)remove;
-(NSArray *)keyPaths;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setObserver:(id)arg1 ;
-(id)observer;
-(id<NSObject>)object;
-(void)setObject:(id<NSObject>)arg1 ;
-(void)dealloc;
@end

