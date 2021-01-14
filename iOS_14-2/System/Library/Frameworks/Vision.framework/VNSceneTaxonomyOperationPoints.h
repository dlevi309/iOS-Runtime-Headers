/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNOperationPoints.h>

@class NSString, NSURL, NSMapTable;

@interface VNSceneTaxonomyOperationPoints : VNOperationPoints {

	NSString* _frameworkOperationPointsIdentifier;
	NSURL* _nonframeworkDataURL;
	NSMapTable* _labelToOperationPointsDataIndexMap;
	SCD_Struct_VN60* _operationPointsDataArray;
	unsigned long long _cachedHashValue;

}
+(BOOL)supportsSecureCoding;
+(id)loadFromURL:(id)arg1 error:(id*)arg2 ;
+(id)loadFromPropertyList:(id)arg1 error:(id*)arg2 ;
+(id)loadFromIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)URLForIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)getDefaultConfidence:(float*)arg1 forClassificationIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)getConfidence:(float*)arg1 forClassificationIdentifier:(id)arg2 withPrecision:(float)arg3 error:(id*)arg4 ;
-(BOOL)getPrecision:(float*)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id*)arg4 ;
-(BOOL)getConfidence:(float*)arg1 forClassificationIdentifier:(id)arg2 withRecall:(float)arg3 error:(id*)arg4 ;
-(BOOL)getRecall:(float*)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id*)arg4 ;
-(id)_propertyListRepresentation;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLabelToOperationPointsDataIndexMap:(id)arg1 operationPointsDataArray:(SCD_Struct_VN60*)arg2 ;
-(const SCD_Struct_VN60*)_operationPointsDataForClassificationIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)_allClassificationIdentifiers;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

