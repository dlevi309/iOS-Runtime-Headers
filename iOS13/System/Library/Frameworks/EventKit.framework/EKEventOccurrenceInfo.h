/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class EKObjectID;

@interface EKEventOccurrenceInfo : NSObject {

	EKObjectID* _objectID;
	double _date;

}

@property (nonatomic,retain) EKObjectID * objectID;              //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) double date;                        //@synthesize date=_date - In the implementation block
-(id)description;
-(double)date;
-(EKObjectID *)objectID;
-(void)setDate:(double)arg1 ;
-(void)setObjectID:(EKObjectID *)arg1 ;
-(id)initWithObjectID:(id)arg1 date:(double)arg2 ;
@end

