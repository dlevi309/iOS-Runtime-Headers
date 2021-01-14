/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/

#import <Montreal/MontrealNNDescription.h>
#import <Montreal/MontrealNNDescriptionProtocol.h>

@class NSString, NSNumber, NSArray, NSData, MontrealNNModelQuantization;

@interface MontrealNNModelWeight : MontrealNNDescription <MontrealNNDescriptionProtocol> {

	NSString* _name;
	NSNumber* _index;
	NSArray* _dimension;
	NSArray* _weightValues;
	NSData* _weightData;
	MontrealNNModelQuantization* _quantization;
	NSString* _jsonDir;

}

@property (readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (readonly) NSNumber * index;                                        //@synthesize index=_index - In the implementation block
@property (readonly) NSArray * dimension;                                     //@synthesize dimension=_dimension - In the implementation block
@property (readonly) NSArray * weightValues;                                  //@synthesize weightValues=_weightValues - In the implementation block
@property (readonly) NSData * weightData;                                     //@synthesize weightData=_weightData - In the implementation block
@property (readonly) MontrealNNModelQuantization * quantization;              //@synthesize quantization=_quantization - In the implementation block
@property (readonly) NSString * jsonDir;                                      //@synthesize jsonDir=_jsonDir - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)index;
-(NSArray *)dimension;
-(NSString *)jsonDir;
-(NSString *)name;
-(id)jsonDescription;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)checkForValidity;
-(void)generateJSONAtPath:(id)arg1 ;
-(id)createDataContainer;
-(MontrealNNModelQuantization *)quantization;
-(id)initWithDictionary:(id)arg1 quantization:(id)arg2 jsonDir:(id)arg3 ;
-(id)initWithName:(id)arg1 index:(id)arg2 dimension:(id)arg3 weightValues:(id)arg4 ;
-(id)initWithName:(id)arg1 index:(id)arg2 dimension:(id)arg3 weightData:(id)arg4 ;
-(NSArray *)weightValues;
-(id)initWithName:(id)arg1 index:(id)arg2 dimension:(id)arg3 ;
-(NSData *)weightData;
-(id)createflattenWeightsFile:(id)arg1 ;
-(id)createConvertArrayToData:(id)arg1 quantization:(id)arg2 ;
-(id)createflattenWeightsHierarchy:(id)arg1 ;
@end

