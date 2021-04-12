/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSObservable.h>

@class NSObject, NSString;

@interface _AMSKeyValueObservable : AMSObservable {

	NSObject* _context;
	NSString* _keyPath;
	NSObject* _object;

}

@property (nonatomic,retain) NSObject * context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * keyPath;                      //@synthesize keyPath=_keyPath - In the implementation block
@property (assign,nonatomic,__weak) NSObject * object;              //@synthesize object=_object - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)sendCompletion;
-(NSObject *)object;
-(NSObject *)context;
-(void)setObject:(NSObject *)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(NSString *)keyPath;
-(BOOL)cancel;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setContext:(NSObject *)arg1 ;
@end

