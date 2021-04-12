/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class NSString;

@interface AXMText : NSObject {

	NSString* _text;
	double _confidence;
	CGRect _boundingBox;

}

@property (nonatomic,retain) NSString * text;                 //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) CGRect boundingBox;              //@synthesize boundingBox=_boundingBox - In the implementation block
@property (assign,nonatomic) double confidence;               //@synthesize confidence=_confidence - In the implementation block
-(double)confidence;
-(void)setBoundingBox:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setConfidence:(double)arg1 ;
-(NSString *)text;
-(CGRect)boundingBox;
@end

