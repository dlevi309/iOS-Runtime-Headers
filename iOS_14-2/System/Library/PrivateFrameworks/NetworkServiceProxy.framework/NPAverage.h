/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface NPAverage : NSObject <NSSecureCoding> {

	unsigned long long _size;
	NSMutableArray* _samples;

}

@property (retain) NSMutableArray * samples;                  //@synthesize samples=_samples - In the implementation block
@property (assign) unsigned long long size;                   //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long average; 
@property (readonly) BOOL isLastValid; 
@property (readonly) BOOL isAnyValid; 
+(BOOL)supportsSecureCoding;
-(NSMutableArray *)samples;
-(BOOL)isAnyValid;
-(BOOL)isLastValid;
-(void)setSamples:(NSMutableArray *)arg1 ;
-(unsigned long long)average;
-(void)addSample:(unsigned long long)arg1 ;
-(void)addSamples:(id)arg1 ;
-(unsigned long long)size;
-(id)initWithSampleSize:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(void)setSize:(unsigned long long)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

