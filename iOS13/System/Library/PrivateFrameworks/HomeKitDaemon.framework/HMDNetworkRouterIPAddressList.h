/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterIPAddressList : NSObject <NSCopying, HMDTLVProtocol> {

	NSMutableArray* _addresses;

}

@property (nonatomic,retain) NSMutableArray * addresses;              //@synthesize addresses=_addresses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)addresses;
-(id)initWithAddresses:(id)arg1 ;
-(void)setAddresses:(NSMutableArray *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
@end

