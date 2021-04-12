/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFormat.h>
#import <libobjc.A.dylib/BWDataBufferBackedFormat.h>

@class NSDictionary, NSString;

@interface BWPointCloudFormat : BWFormat <BWDataBufferBackedFormat> {

	unsigned long long _maxPoints;
	unsigned long long _dataBufferSize;
	unsigned _dataFormat;
	NSDictionary* _dataBufferAttributes;

}

@property (nonatomic,readonly) unsigned long long maxPoints;                     //@synthesize maxPoints=_maxPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long dataBufferSize;                //@synthesize dataBufferSize=_dataBufferSize - In the implementation block
@property (nonatomic,readonly) unsigned dataFormat;                              //@synthesize dataFormat=_dataFormat - In the implementation block
@property (nonatomic,readonly) NSDictionary * dataBufferAttributes;              //@synthesize dataBufferAttributes=_dataBufferAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)formatByResolvingRequirements:(id)arg1 ;
+(id)_formatRequirementsByResolvingFormatRequirements:(id)arg1 withFormatRequirements:(id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(unsigned)mediaType;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(NSDictionary *)dataBufferAttributes;
-(unsigned long long)maxPoints;
-(unsigned long long)dataBufferSize;
-(id)_initWithResolvedFormatRequirements:(id)arg1 ;
-(unsigned)dataFormat;
@end

