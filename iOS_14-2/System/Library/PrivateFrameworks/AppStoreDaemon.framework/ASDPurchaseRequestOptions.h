/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray;

@interface ASDPurchaseRequestOptions : ASDRequestOptions {

	NSArray* _purchases;

}

@property (nonatomic,readonly) NSArray * purchases;              //@synthesize purchases=_purchases - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSArray *)purchases;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPurchases:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

