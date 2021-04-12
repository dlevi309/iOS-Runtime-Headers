/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol HFCharacteristicReadPolicy;
@class NSDictionary, HFUpdateLogger;

@interface _HFItemUpdateRequestContext : NSObject <NSCopying> {

	SEL _senderSelector;
	NSDictionary* _updateOptions;
	HFUpdateLogger* _logger;
	id<HFCharacteristicReadPolicy> _readPolicy;

}

@property (assign,nonatomic) SEL senderSelector;                                     //@synthesize senderSelector=_senderSelector - In the implementation block
@property (nonatomic,copy) NSDictionary * updateOptions;                             //@synthesize updateOptions=_updateOptions - In the implementation block
@property (nonatomic,retain) HFUpdateLogger * logger;                                //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicReadPolicy> readPolicy;              //@synthesize readPolicy=_readPolicy - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(HFUpdateLogger *)logger;
-(void)setLogger:(HFUpdateLogger *)arg1 ;
-(id<HFCharacteristicReadPolicy>)readPolicy;
-(void)setReadPolicy:(id<HFCharacteristicReadPolicy>)arg1 ;
-(SEL)senderSelector;
-(void)setSenderSelector:(SEL)arg1 ;
-(NSDictionary *)updateOptions;
-(void)setUpdateOptions:(NSDictionary *)arg1 ;
@end

