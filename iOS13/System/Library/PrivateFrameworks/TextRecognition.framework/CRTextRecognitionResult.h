/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class NSArray;

@interface CRTextRecognitionResult : NSObject {

	NSArray* _candidates;
	CGPoint _topLeft;
	CGPoint _topRight;
	CGPoint _bottomRight;
	CGPoint _bottomLeft;
	CGRect _boundingBox;

}

@property (readonly) NSArray * candidates;              //@synthesize candidates=_candidates - In the implementation block
@property (readonly) CGRect boundingBox;                //@synthesize boundingBox=_boundingBox - In the implementation block
@property (readonly) CGPoint topLeft;                   //@synthesize topLeft=_topLeft - In the implementation block
@property (readonly) CGPoint topRight;                  //@synthesize topRight=_topRight - In the implementation block
@property (readonly) CGPoint bottomRight;               //@synthesize bottomRight=_bottomRight - In the implementation block
@property (readonly) CGPoint bottomLeft;                //@synthesize bottomLeft=_bottomLeft - In the implementation block
-(CGRect)boundingBox;
-(CGPoint)topLeft;
-(CGPoint)topRight;
-(CGPoint)bottomLeft;
-(CGPoint)bottomRight;
-(NSArray *)candidates;
-(id)initWithTextFeature:(id)arg1 options:(id)arg2 ;
@end

