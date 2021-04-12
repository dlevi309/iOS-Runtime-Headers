/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSString;

@interface NSBoundKeyPath : NSObject {

	id _rootObject;
	NSString* _keyPath;

}

@property (assign) id rootObject; 
@property (readonly) NSString * keyPath; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)newKeyPathWithRootObject:(id)arg1 keyPathString:(id)arg2 ;
+(id)keyPathWithRootObject:(id)arg1 path:(const char*)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)value;
-(NSString *)keyPath;
-(void)setValue:(id)arg1 ;
-(void)setRootObject:(id)arg1 ;
-(id)rootObject;
-(BOOL)validateValue:(inout id*)arg1 error:(out id*)arg2 ;
-(id)mutableArrayValue;
-(id)mutableOrderedSetValue;
-(id)mutableSetValue;
@end

