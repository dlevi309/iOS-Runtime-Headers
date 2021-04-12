/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(unsigned long long)type;
-(id)encodedFeature;
-(id)initWithEncodedFeature:(id)arg1 graph:(id)arg2 ;
-(BOOL)isNoneFeature;
-(id)nodeInGraph:(id)arg1 ;
@end

