/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/BWFormatRequirements.h>

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
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned)mediaType;
-(BOOL)memoryPoolUseAllowed;
-(void)setMemoryPoolUseAllowed:(BOOL)arg1 ;
-(Class)formatClass;
-(NSDictionary *)dataBufferAttributes;
-(unsigned long long)maxPoints;
-(void)setMaxPoints:(unsigned long long)arg1 ;
-(NSArray *)supportedDataFormats;
-(void)setSupportedDataFormats:(NSArray *)arg1 ;
-(unsigned long long)dataBufferSize;
-(void)setDataBufferSize:(unsigned long long)arg1 ;
@end

