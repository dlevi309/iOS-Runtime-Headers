/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface HFItemProvider : NSObject <NSCopying> {

	NSSet* _clientInvalidationReasons;

}

@property (nonatomic,readonly) NSSet * items; 
@property (nonatomic,retain) NSSet * clientInvalidationReasons;              //@synthesize clientInvalidationReasons=_clientInvalidationReasons - In the implementation block
+(BOOL)prefersNonBlockingReloads;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)items;
-(id)reloadItems;
-(id)reloadItemsWithHomeKitObjects:(id)arg1 filter:(/*^block*/id)arg2 itemMap:(/*^block*/id)arg3 ;
-(id)invalidationReasons;
-(id)reloadItemsWithObjects:(id)arg1 keyAdaptor:(/*^block*/id)arg2 itemAdaptor:(/*^block*/id)arg3 filter:(/*^block*/id)arg4 itemMap:(/*^block*/id)arg5 ;
-(NSSet *)clientInvalidationReasons;
-(void)setClientInvalidationReasons:(NSSet *)arg1 ;
@end

