/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPolygon:(TSDWrapPolygon *)arg1 ;
-(id)wrapPolygon;
-(void)fixTransformFromInterimPosition;
-(void)storeActualPosition;
-(CGRect)boundsInfluencingExteriorWrap;
-(CGRect)boundsInRoot;
@end

