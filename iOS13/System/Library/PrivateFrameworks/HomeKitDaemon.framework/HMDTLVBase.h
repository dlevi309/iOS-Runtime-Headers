/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVDescription.h>

@class NSData;

@interface HMDTLVBase : HMDTLVDescription {

	NSData* _tlvDatablob;

}

@property (nonatomic,readonly) NSData * tlvDatablob;              //@synthesize tlvDatablob=_tlvDatablob - In the implementation block
-(id)initWithTLVData:(id)arg1 ;
-(BOOL)_parse:(id)arg1 ;
-(BOOL)_parseFromTLVData;
-(NSData *)tlvDatablob;
-(BOOL)_parseMandatory:(id)arg1 optional:(id)arg2 ;
-(id)_parseArray:(id)arg1 result:(id*)arg2 objectCreator:(/*^block*/id)arg3 ;
-(BOOL)_parseFields:(id)arg1 ;
@end

