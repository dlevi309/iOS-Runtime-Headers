/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAPTLVDescription.h>

@class NSData;

@interface HAPTLVBase : HAPTLVDescription {

	NSData* _tlvDatablob;

}

@property (nonatomic,readonly) NSData * tlvDatablob;              //@synthesize tlvDatablob=_tlvDatablob - In the implementation block
-(BOOL)_parse:(id)arg1 ;
-(BOOL)_parseFromTLVData;
-(id)initWithTLVData:(id)arg1 ;
-(NSData *)tlvDatablob;
-(BOOL)_parseMandatory:(id)arg1 optional:(id)arg2 ;
-(id)_parseArray:(id)arg1 result:(id*)arg2 objectCreator:(/*^block*/id)arg3 ;
-(BOOL)_parseFields:(id)arg1 ;
@end

