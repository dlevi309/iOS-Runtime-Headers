/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
*/

#import <libobjc.A.dylib/SYDClientProtocol.h>

@protocol SYDClientProtocol;
@interface SYDClientProtocolProxy : NSObject <SYDClientProtocol> {

	id<SYDClientProtocol> _target;

}

@property (assign,nonatomic,__weak) id<SYDClientProtocol> target;              //@synthesize target=_target - In the implementation block
-(void)setTarget:(id<SYDClientProtocol>)arg1 ;
-(id<SYDClientProtocol>)target;
-(id)initWithTarget:(id)arg1 ;
-(void)storeDidChangeWithIdentifier:(id)arg1 type:(long long)arg2 changeDictionary:(id)arg3 reply:(/*^block*/id)arg4 ;
@end

