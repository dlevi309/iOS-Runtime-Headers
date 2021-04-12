/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
*/


#import <Futhark/Futhark-Structs.h>
@class NSArray, NSString;

@interface FKTextFeature : NSObject {

	SCD_Union_FK0 _backingIndex;
	FKSession* _session;
	int _scale;
	float _confidence;
	NSArray* _candidates;
	long long _featureID;
	NSArray* _corners;
	long long _type;
	NSString* _text;
	NSArray* _subFeatures;
	CGRect _boundingBox;

}

@property (nonatomic,retain) NSArray * subFeatures;                   //@synthesize subFeatures=_subFeatures - In the implementation block
@property (nonatomic,copy) NSString * text;                           //@synthesize text=_text - In the implementation block
@property (assign) float confidence;                                  //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) long long featureID;                   //@synthesize featureID=_featureID - In the implementation block
@property (nonatomic,readonly) CGRect boundingBox;                    //@synthesize boundingBox=_boundingBox - In the implementation block
@property (nonatomic,retain,readonly) NSArray * corners;              //@synthesize corners=_corners - In the implementation block
@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
@property (readonly) NSArray * candidates;                            //@synthesize candidates=_candidates - In the implementation block
+(id)featureFromConcompIndex:(int)arg1 session:(FKSession*)arg2 scaling:(SCD_Struct_FK4*)arg3 type:(long long)arg4 createDiacriticFeatures:(BOOL)arg5 featureID:(long long*)arg6 ;
+(id)featureFromSequenceIndex:(int)arg1 session:(FKSession*)arg2 scaling:(SCD_Struct_FK4*)arg3 createConcompFeatures:(BOOL)arg4 createDiacriticFeatures:(BOOL)arg5 featureID:(long long*)arg6 ;
-(void)dealloc;
-(long long)type;
-(float)confidence;
-(CGRect)boundingBox;
-(NSArray *)subFeatures;
-(NSString *)text;
-(NSArray *)corners;
-(void)setText:(NSString *)arg1 ;
-(void)setConfidence:(float)arg1 ;
-(NSArray *)candidates;
-(long long)featureID;
-(id)initWithType:(long long)arg1 boundingBox:(CGRect*)arg2 corners:(id)arg3 featureID:(long long)arg4 session:(FKSession*)arg5 backingIndex:(/*function pointer*/void*)arg6 scale:(int)arg7 ;
-(void)setSubFeatures:(NSArray *)arg1 ;
@end

