/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterClientControlResponse : NSObject <NSCopying, HMDTLVProtocol> {

	NSMutableArray* _operationResponses;

}

@property (nonatomic,retain) NSMutableArray * operationResponses;              //@synthesize operationResponses=_operationResponses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setOperationResponses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)operationResponses;
-(id)initWithOperationResponses:(id)arg1 ;
@end

