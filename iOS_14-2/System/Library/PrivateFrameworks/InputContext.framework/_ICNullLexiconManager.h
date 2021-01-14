/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/

#import <libobjc.A.dylib/_ICLexiconManaging.h>

@class NSMutableArray;

@interface _ICNullLexiconManager : NSObject <_ICLexiconManaging> {

	NSMutableArray* _contactObservers;

}
-(void)hibernate;
-(void)warmUp;
-(id)init;
-(void)removeContactObserver:(/*^block*/id)arg1 ;
-(id)loadLexicons:(/*^block*/id)arg1 ;
-(void)unloadLexicons;
-(id)loadLexiconsUsingFilter:(/*^block*/id)arg1 ;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1 ;
@end

