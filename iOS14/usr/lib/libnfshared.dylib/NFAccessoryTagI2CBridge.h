/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <libnfshared.dylib/NFAccessoryTag.h>

@class NSData;

@interface NFAccessoryTagI2CBridge : NFAccessoryTag {

	BOOL _selected;
	int _transactionCounter;
	long long _type;
	NSData* _tagUUID;

}

@property (nonatomic,readonly) long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSData * tagUUID;                    //@synthesize tagUUID=_tagUUID - In the implementation block
@property (assign,nonatomic) BOOL selected;                       //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) int transactionCounter;              //@synthesize transactionCounter=_transactionCounter - In the implementation block
-(id)init;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(id)initWithDelegate:(id)arg1 ;
-(NSData *)tagUUID;
-(long long)type;
-(void)setTagUUID:(NSData *)arg1 ;
-(id)initWithType:(long long)arg1 delegate:(id)arg2 ;
-(id)_selectTagType0;
-(id)_writeToBridgeType0:(id)arg1 fragmentationSupport:(BOOL)arg2 ;
-(id)_readFromBridgeType0:(id*)arg1 fragmentationSupport:(BOOL)arg2 ;
-(id)selectTag;
-(id)writeToBridge:(id)arg1 fragmentationSupport:(BOOL)arg2 response:(id*)arg3 ;
-(id)readFromBridge:(id)arg1 fragmentationSupport:(BOOL)arg2 response:(id*)arg3 ;
-(int)transactionCounter;
-(void)setTransactionCounter:(int)arg1 ;
-(id)_type0ReadConfigRange:(NSRange)arg1 data:(id*)arg2 ;
-(id)_type0ReadConfigReg:(unsigned char)arg1 data:(id*)arg2 ;
-(void)_bridgeType0CreateAccessoryHeaderWithBuffer:(id)arg1 pageLength:(unsigned long long)arg2 isLastPage:(BOOL)arg3 ;
-(id)_type0WriteSRAM:(unsigned char)arg1 data:(id)arg2 ;
-(id)_bridgeType0WritePollForCompletionWithTimeout:(double)arg1 ;
-(BOOL)_bridgeType0WritePollForSystemReadyWithTimeout:(double)arg1 beforeWrite:(BOOL)arg2 outError:(id*)arg3 ;
-(id)_bridgeType0WriteOneSRAMPage:(id)arg1 fragmentationSupport:(BOOL)arg2 isLastPage:(BOOL)arg3 ;
-(id)_type0ReadSRAM:(unsigned char)arg1 numOfBlocks:(unsigned char)arg2 data:(id*)arg3 ;
-(id)_bridgeType0ReadMultipleSRAMPagesWithBuffer:(id)arg1 ;
-(id)_type0WriteConfigReg:(unsigned char)arg1 data:(id)arg2 ;
-(id)_type0GetSystemInfo:(id*)arg1 ;
@end

