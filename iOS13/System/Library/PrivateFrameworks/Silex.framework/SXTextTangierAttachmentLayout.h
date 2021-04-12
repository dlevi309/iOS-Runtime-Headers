/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSDDrawableLayout.h>

@class TSDWrapPolygon;

@interface SXTextTangierAttachmentLayout : TSDDrawableLayout {

	TSDWrapPolygon* _polygon;

}

@property (nonatomic,retain) TSDWrapPolygon * polygon;              //@synthesize polygon=_polygon - In the implementation block
-(void)validate;
-(TSDWrapPolygon *)polygon;
-(id)wrapPolygon;
-(void)setPolygon:(TSDWrapPolygon *)arg1 ;
-(void)fixTransformFromInterimPosition;
-(void)storeActualPosition;
-(CGRect)boundsInfluencingExteriorWrap;
-(CGRect)boundsInRoot;
@end

