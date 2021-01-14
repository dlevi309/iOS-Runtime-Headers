/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSString;

@interface NSBoundKeyPath : NSObject {

	id _rootObject;
	NSString* _keyPath;

}

@property (assign) id rootObject; 
@property (readonly) NSString * keyPath; 
+(id)newKeyPathWithRootObject:(id)arg1 keyPathString:(id)arg2 ;
+(id)keyPathWithRootObject:(id)arg1 path:(const char*)arg2 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)rootObject;
-(id)mutableSetValue;
-(void)setRootObject:(id)arg1 ;
-(id)mutableArrayValue;
-(void)setValue:(id)arg1 ;
-(id)mutableOrderedSetValue;
-(BOOL)validateValue:(inout id*)arg1 error:(out id*)arg2 ;
-(unsigned long long)hash;
-(NSString *)keyPath;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

