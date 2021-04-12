/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFormat.h>
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
+(id)formatByResolvingRequirements:(id)arg1 printErrors:(BOOL)arg2 ;
+(id)_formatRequirementsByResolvingFormatRequirements:(id)arg1 withFormatRequirements:(id)arg2 ;
+(id)formatByResolvingRequirements:(id)arg1 ;
-(unsigned)mediaType;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(unsigned)dataFormat;
-(NSString *)debugDescription;
-(id)_initWithResolvedFormatRequirements:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)maxPoints;
-(unsigned long long)dataBufferSize;
-(void)dealloc;
-(NSDictionary *)dataBufferAttributes;
@end

