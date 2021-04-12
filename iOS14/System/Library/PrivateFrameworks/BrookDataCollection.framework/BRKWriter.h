/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrookDataCollection.framework/BrookDataCollection
*/


#import <BrookDataCollection/BrookDataCollection-Structs.h>
@class NSString;

@interface BRKWriter : NSObject {

	os_unfair_lock_s _lock;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
-(id)initWithPath:(id)arg1 ;
-(NSString *)path;
-(void)performWithLock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

