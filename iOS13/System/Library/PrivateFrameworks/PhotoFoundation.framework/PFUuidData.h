/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <CoreFoundation/NSData.h>

@class NSString, NSData;

@interface PFUuidData : NSData {

	unsigned char _uuid[16];

}

@property (nonatomic,readonly) NSString * canonicalStringValue; 
@property (nonatomic,readonly) NSString * mercuryStringValue; 
@property (nonatomic,readonly) NSData * dataValue; 
@property (nonatomic,readonly) BOOL isNull; 
+(BOOL)isMercuryBase64String:(id)arg1 ;
+(BOOL)isCanonicalUuidString:(id)arg1 ;
+(id)randomUuid;
+(id)uuidWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)uuidWithData:(id)arg1 ;
+(id)uuidWithString:(id)arg1 ;
+(id)nullUuid;
+(BOOL)isMercuryUuidString:(id)arg1 ;
+(BOOL)isSupportedUuidString:(id)arg1 ;
+(id)generateUuidAsCanonicalString;
+(id)generateUuidAsMercuryString;
+(id)hostUuid;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(const void*)bytes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(BOOL)isEqualToData:(id)arg1 ;
-(NSData *)dataValue;
-(id)initWithMercuryBase64String:(id)arg1 ;
-(id)initRandom;
-(id)initNull;
-(NSString *)canonicalStringValue;
-(NSString *)mercuryStringValue;
-(BOOL)isNull;
@end

