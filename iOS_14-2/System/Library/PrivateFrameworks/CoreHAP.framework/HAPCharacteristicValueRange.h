/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSData, NSString;

@interface HAPCharacteristicValueRange : NSObject <NSCopying, HAPTLVProtocol> {

	NSData* _lowerBound;
	NSData* _upperBound;

}

@property (nonatomic,retain) NSData * lowerBound;                   //@synthesize lowerBound=_lowerBound - In the implementation block
@property (nonatomic,retain) NSData * upperBound;                   //@synthesize upperBound=_upperBound - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)lowerBound;
-(NSData *)upperBound;
-(id)initWithLowerBound:(id)arg1 upperBound:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setLowerBound:(NSData *)arg1 ;
-(void)setUpperBound:(NSData *)arg1 ;
@end

