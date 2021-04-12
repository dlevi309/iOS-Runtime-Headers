/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSMutableData, NSData;

@interface WFSSHKeyEncoder : NSObject {

	NSMutableData* _data;

}

@property (nonatomic,readonly) NSMutableData * data;                          //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned long long encodedLength; 
@property (nonatomic,readonly) NSData * encodedData; 
-(id)init;
-(unsigned long long)encodedLength;
-(void)encodeData:(id)arg1 ;
-(NSData *)encodedData;
-(NSMutableData *)data;
-(void)encodeString:(id)arg1 ;
-(void)encodeChar:(char)arg1 ;
-(void)encodeInteger:(unsigned)arg1 ;
-(void)encodeStringWithPreceedingLength:(id)arg1 ;
-(void)encodeDataWithPreceedingLength:(id)arg1 ;
@end

