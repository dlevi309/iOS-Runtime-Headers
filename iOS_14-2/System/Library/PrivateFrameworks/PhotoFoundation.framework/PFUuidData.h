/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)nullUuid;
+(id)hostUuid;
+(id)randomUuid;
+(BOOL)isCanonicalUuidString:(id)arg1 ;
+(id)uuidWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)uuidWithData:(id)arg1 ;
+(id)uuidWithString:(id)arg1 ;
+(BOOL)isMercuryUuidString:(id)arg1 ;
+(BOOL)isSupportedUuidString:(id)arg1 ;
+(id)generateUuidAsCanonicalString;
+(id)generateUuidAsMercuryString;
+(BOOL)isMercuryBase64String:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithString:(id)arg1 ;
-(BOOL)isEqualToData:(id)arg1 ;
-(NSData *)dataValue;
-(id)init;
-(id)initNull;
-(const void*)bytes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initRandom;
-(NSString *)canonicalStringValue;
-(NSString *)mercuryStringValue;
-(unsigned long long)length;
-(id)initWithData:(id)arg1 ;
-(id)description;
-(Class)classForCoder;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isNull;
-(id)initWithMercuryBase64String:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

