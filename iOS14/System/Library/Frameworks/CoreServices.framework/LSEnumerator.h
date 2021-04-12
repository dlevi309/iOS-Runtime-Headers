/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class NSPredicate;

@interface LSEnumerator : NSEnumerator {

	/*^block*/id _filter;
	atomic_flag _hasFiredErrorHandler;
	/*^block*/id _errorHandler;

}

@property (nonatomic,copy) id errorHandler;                      //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) NSPredicate * predicate; 
@property (nonatomic,copy) id filter; 
+(id)new;
+(void)initialize;
+(id)enumeratorForApplicationProxiesWithOptions:(unsigned long long)arg1 ;
+(id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)arg1 options:(unsigned long long)arg2 ;
+(id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)arg1 options:(unsigned long long)arg2 filter:(/*^block*/id)arg3 ;
-(id)nextObject;
-(id)errorHandler;
-(void)setFilter:(id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)filter;
-(NSPredicate *)predicate;
-(id)init;
-(id)_initWithContext:(LSContext*)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)_fireErrorHandlerWithError:(id)arg1 ;
@end

