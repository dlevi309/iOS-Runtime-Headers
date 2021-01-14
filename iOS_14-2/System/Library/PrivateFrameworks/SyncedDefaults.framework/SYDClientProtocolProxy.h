/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
*/

#import <libobjc.A.dylib/SYDClientProtocol.h>

@protocol SYDClientProtocol;
@interface SYDClientProtocolProxy : NSObject <SYDClientProtocol> {

	id<SYDClientProtocol> _target;

}

@property (assign,nonatomic,__weak) id<SYDClientProtocol> target;              //@synthesize target=_target - In the implementation block
-(void)setTarget:(id<SYDClientProtocol>)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(id<SYDClientProtocol>)target;
-(void)storeDidChangeWithConfiguration:(id)arg1 changeDictionary:(id)arg2 reply:(/*^block*/id)arg3 ;
@end
