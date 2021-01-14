/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSString;

@interface PGFeature : NSObject {

	id _typeSpecificIdentifier;
	unsigned long long _type;
	NSString* _name;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (readonly) BOOL isNoneFeature; 
+(id)stringForFeatureType:(unsigned long long)arg1 ;
+(id)featureWithType:(unsigned long long)arg1 node:(id)arg2 ;
+(id)featureWithMeaningfulEvent:(id)arg1 ;
+(id)featureWithType:(unsigned long long)arg1 name:(id)arg2 ;
+(id)noneFeatureWithType:(unsigned long long)arg1 ;
+(id)nameForNode:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithEncodedFeature:(id)arg1 graph:(id)arg2 ;
-(id)encodedFeature;
-(BOOL)isNoneFeature;
-(id)nodeInGraph:(id)arg1 ;
@end

