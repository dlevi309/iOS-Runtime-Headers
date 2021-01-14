/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface ADVector : NSObject <NSSecureCoding> {

	float* _dataPtr;
	unsigned _length;
	NSString* _version;

}

@property (nonatomic,retain) NSString * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) unsigned length;               //@synthesize length=_length - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)length;
-(id)initWithDictionary:(id)arg1 ;
-(float)magnitude;
-(id)initWithVersion:(id)arg1 data:(id)arg2 ;
-(NSData *)data;
-(id)initWithCoder:(id)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(void)dealloc;
-(id)scalarMultiply:(float)arg1 ;
-(id)initWithVersion:(id)arg1 andArray:(id)arg2 ;
-(float*)_createDataPtrFromArray:(id)arg1 ;
-(id)arrayOfNumbers;
-(void)setDataPtr:(float*)arg1 ;
-(id)_initWithVersion:(id)arg1 length:(unsigned)arg2 rawMallocedFloats:(float*)arg3 ;
-(float)dotProduct:(id)arg1 ;
-(id)initWithVersion:(id)arg1 length:(unsigned)arg2 floats:(float*)arg3 ;
-(void)setArrayOfNumber:(id)arg1 ;
-(id)vectorAdd:(id)arg1 ;
-(id)vectorSubtract:(id)arg1 ;
-(id)cosineSimilarity:(id)arg1 ;
@end

