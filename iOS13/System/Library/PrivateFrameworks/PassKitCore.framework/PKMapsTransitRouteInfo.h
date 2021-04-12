/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, PKCurrencyAmount;

@interface PKMapsTransitRouteInfo : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _transitNetworkIdentifiers;
	PKCurrencyAmount* _cost;

}

@property (nonatomic,readonly) NSSet * transitNetworkIdentifiers;              //@synthesize transitNetworkIdentifiers=_transitNetworkIdentifiers - In the implementation block
@property (nonatomic,readonly) PKCurrencyAmount * cost;                        //@synthesize cost=_cost - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKCurrencyAmount *)cost;
-(id)initWithTransitNetworkIdentifiers:(id)arg1 cost:(id)arg2 ;
-(NSSet *)transitNetworkIdentifiers;
@end

