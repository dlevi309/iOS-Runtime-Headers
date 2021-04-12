/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKUINavigationStackEnsureConsistencyRequest : NSObject <NSCopying> {

	BOOL _operationDidComplete;
	long long _navigationControllerOperation;

}

@property (nonatomic,readonly) long long navigationControllerOperation;              //@synthesize navigationControllerOperation=_navigationControllerOperation - In the implementation block
@property (nonatomic,readonly) BOOL operationDidComplete;                            //@synthesize operationDidComplete=_operationDidComplete - In the implementation block
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithNavigationControllerOperation:(long long)arg1 operationDidComplete:(BOOL)arg2 ;
-(long long)navigationControllerOperation;
-(BOOL)operationDidComplete;
@end

