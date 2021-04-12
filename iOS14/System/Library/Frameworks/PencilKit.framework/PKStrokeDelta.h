/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


#import <PencilKit/PencilKit-Structs.h>
@class PKStroke, PKStrokePath, NSUUID;

@interface PKStrokeDelta : NSObject {

	PKStroke* _deltaStroke;
	PKStrokePath* _deltaStrokeData;
	NSUUID* _strokeUUID;

}

@property (nonatomic,retain) PKStroke * deltaStroke;                      //@synthesize deltaStroke=_deltaStroke - In the implementation block
@property (nonatomic,retain) PKStrokePath * deltaStrokeData;              //@synthesize deltaStrokeData=_deltaStrokeData - In the implementation block
@property (nonatomic,retain) NSUUID * _strokeUUID;                        //@synthesize strokeUUID=_strokeUUID - In the implementation block
-(id)dataRepresentation;
-(void)saveToArchive:(StrokeDelta*)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(id)initWithArchive:(const StrokeDelta*)arg1 error:(id*)arg2 ;
-(NSUUID *)_strokeUUID;
-(PKStroke *)deltaStroke;
-(PKStrokePath *)deltaStrokeData;
-(void)setDeltaStroke:(PKStroke *)arg1 ;
-(void)setDeltaStrokeData:(PKStrokePath *)arg1 ;
-(void)set_strokeUUID:(NSUUID *)arg1 ;
@end

