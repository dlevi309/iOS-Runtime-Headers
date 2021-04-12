/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface HMBAction : HMFObject <NSCopying, NSMutableCopying> {

	BOOL _shouldUpdateClients;

}

@property (assign,nonatomic) BOOL shouldUpdateClients;              //@synthesize shouldUpdateClients=_shouldUpdateClients - In the implementation block
+(id)shouldUpdateClientsAction;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setShouldUpdateClients:(BOOL)arg1 ;
-(BOOL)shouldUpdateClients;
@end

