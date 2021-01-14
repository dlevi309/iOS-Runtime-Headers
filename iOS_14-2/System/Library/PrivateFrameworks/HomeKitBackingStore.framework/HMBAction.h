/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setShouldUpdateClients:(BOOL)arg1 ;
-(BOOL)shouldUpdateClients;
@end

