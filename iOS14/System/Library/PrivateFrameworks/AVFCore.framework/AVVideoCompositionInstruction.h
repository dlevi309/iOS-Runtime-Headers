/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <AVFCore/AVVideoCompositionInstruction.h>
@class NSArray;


@protocol AVVideoCompositionInstruction <NSObject>
@property (nonatomic,readonly) SCD_Struct_AV7 timeRange; 
@property (nonatomic,readonly) BOOL enablePostProcessing; 
@property (nonatomic,readonly) BOOL containsTweening; 
@property (nonatomic,readonly) NSArray * requiredSourceTrackIDs; 
@property (nonatomic,readonly) int passthroughTrackID; 
@required
-(BOOL)enablePostProcessing;
-(NSArray *)requiredSourceTrackIDs;
-(BOOL)containsTweening;
-(int)passthroughTrackID;
-(SCD_Struct_AV7)timeRange;

@end


@class NSArray, AVVideoCompositionInstructionInternal, NSString;

@interface AVVideoCompositionInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, AVVideoCompositionInstruction> {

	AVVideoCompositionInstructionInternal* _instruction;

}

@property (nonatomic,readonly) SCD_Struct_AV7 timeRange; 
@property (nonatomic,retain,readonly) CGColorRef backgroundColor; 
@property (nonatomic,copy,readonly) NSArray * layerInstructions; 
@property (nonatomic,readonly) BOOL enablePostProcessing; 
@property (nonatomic,readonly) NSArray * requiredSourceTrackIDs; 
@property (nonatomic,readonly) int passthroughTrackID; 
@property (nonatomic,readonly) BOOL containsTweening; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(id)init;
-(BOOL)enablePostProcessing;
-(id)blendingTransferFunction;
-(void)setTimeRange:(SCD_Struct_AV7)arg1 ;
-(NSArray *)layerInstructions;
-(void)setEnablePostProcessing:(BOOL)arg1 ;
-(void)_setValuesFromDictionary:(id)arg1 ;
-(void)setLayerInstructions:(NSArray *)arg1 ;
-(NSArray *)requiredSourceTrackIDs;
-(BOOL)containsTweening;
-(int)passthroughTrackID;
-(void)setBlendingTransferFunction:(id)arg1 ;
-(SCD_Struct_AV7)timeRange;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CGColorRef)backgroundColor;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)_deepCopy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

