/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PICurveControlPoint : NSObject <NSCopying> {

	BOOL _editable;
	double _x;
	double _y;

}

@property (x,nonatomic,readonly) double x;                                   //@synthesize x=_x - In the implementation block
@property (y,nonatomic,readonly) double y;                                   //@synthesize y=_y - In the implementation block
@property (getter=isEditable,nonatomic,readonly) BOOL editable;              //@synthesize editable=_editable - In the implementation block
-(BOOL)isEditable;
-(id)dictionaryRepresentation;
-(double)x;
-(double)y;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithX:(double)arg1 y:(double)arg2 editable:(BOOL)arg3 ;
@end

