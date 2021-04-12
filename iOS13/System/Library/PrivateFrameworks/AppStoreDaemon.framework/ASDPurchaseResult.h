/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, NSNumber;

@interface ASDPurchaseResult : NSObject <NSCopying, NSSecureCoding> {

	BOOL _success;
	NSError* _error;
	NSNumber* _itemID;

}

@property (retain) NSNumber * itemID;                        //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) BOOL success;                 //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)failedToPurchaseItemID:(id)arg1 withError:(id)arg2 ;
+(id)successfullyPurchasedItemID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(NSNumber *)itemID;
-(void)setItemID:(NSNumber *)arg1 ;
-(BOOL)success;
-(id)initWithSuccess:(BOOL)arg1 error:(id)arg2 ;
@end

