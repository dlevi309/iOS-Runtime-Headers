/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSMutableData *)data;
-(NSData *)encodedData;
-(void)encodeData:(id)arg1 ;
-(unsigned long long)encodedLength;
-(void)encodeString:(id)arg1 ;
-(void)encodeChar:(char)arg1 ;
-(void)encodeInteger:(unsigned)arg1 ;
-(void)encodeStringWithPreceedingLength:(id)arg1 ;
-(void)encodeDataWithPreceedingLength:(id)arg1 ;
@end

