/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWFormatRequirements.h>

@class NSArray, NSDictionary;

@interface BWPointCloudFormatRequirements : BWFormatRequirements {

	unsigned long long _maxPoints;
	unsigned long long _dataBufferSize;
	NSArray* _supportedDataFormats;
	BOOL _memoryPoolUseAllowed;

}

@property (nonatomic,copy) NSArray * supportedDataFormats;                       //@synthesize supportedDataFormats=_supportedDataFormats - In the implementation block
@property (assign,nonatomic) unsigned long long maxPoints;                       //@synthesize maxPoints=_maxPoints - In the implementation block
@property (assign,nonatomic) unsigned long long dataBufferSize;                  //@synthesize dataBufferSize=_dataBufferSize - In the implementation block
@property (nonatomic,readonly) NSDictionary * dataBufferAttributes; 
@property (assign,nonatomic) BOOL memoryPoolUseAllowed;                          //@synthesize memoryPoolUseAllowed=_memoryPoolUseAllowed - In the implementation block
-(void)setMemoryPoolUseAllowed:(BOOL)arg1 ;
-(BOOL)memoryPoolUseAllowed;
-(unsigned)mediaType;
-(id)init;
-(id)description;
-(unsigned long long)maxPoints;
-(void)setMaxPoints:(unsigned long long)arg1 ;
-(unsigned long long)dataBufferSize;
-(NSArray *)supportedDataFormats;
-(Class)formatClass;
-(void)setDataBufferSize:(unsigned long long)arg1 ;
-(void)setSupportedDataFormats:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSDictionary *)dataBufferAttributes;
@end

