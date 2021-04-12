/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface MLLayerPath : NSObject <NSCopying> {

	NSArray* _scopedModelNames;
	NSString* _layerName;

}

@property (nonatomic,copy) NSString * layerName;                    //@synthesize layerName=_layerName - In the implementation block
@property (nonatomic,copy) NSArray * scopedModelNames;              //@synthesize scopedModelNames=_scopedModelNames - In the implementation block
-(NSString *)layerName;
-(id)init;
-(BOOL)isEqualToMLLayerPath:(id)arg1 ;
-(void)appendPathComponent:(id)arg1 ;
-(void)setLayerName:(NSString *)arg1 ;
-(id)initWithScopedModelAndLayerName:(id)arg1 layerName:(id)arg2 ;
-(NSArray *)scopedModelNames;
-(unsigned long long)hash;
-(void)setScopedModelNames:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

