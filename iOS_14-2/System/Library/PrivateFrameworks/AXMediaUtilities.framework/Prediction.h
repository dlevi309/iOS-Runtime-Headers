/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class NSString;

@interface Prediction : NSObject {

	unsigned long long _uiClass;
	double _confidence;
	NSString* _label;
	CGRect _boundingBox;

}

@property (assign,nonatomic) unsigned long long uiClass;              //@synthesize uiClass=_uiClass - In the implementation block
@property (assign,nonatomic) double confidence;                       //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) CGRect boundingBox;                      //@synthesize boundingBox=_boundingBox - In the implementation block
@property (nonatomic,retain) NSString * label;                        //@synthesize label=_label - In the implementation block
-(double)confidence;
-(void)setBoundingBox:(CGRect)arg1 ;
-(id)debugDescription;
-(unsigned long long)uiClass;
-(void)setUiClass:(unsigned long long)arg1 ;
-(void)setConfidence:(double)arg1 ;
-(CGRect)boundingBox;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
@end

