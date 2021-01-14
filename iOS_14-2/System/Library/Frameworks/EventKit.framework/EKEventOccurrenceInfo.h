/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class EKObjectID;

@interface EKEventOccurrenceInfo : NSObject {

	EKObjectID* _objectID;
	double _date;

}

@property (nonatomic,retain) EKObjectID * objectID;              //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) double date;                        //@synthesize date=_date - In the implementation block
-(void)setDate:(double)arg1 ;
-(EKObjectID *)objectID;
-(void)setObjectID:(EKObjectID *)arg1 ;
-(id)description;
-(double)date;
-(id)initWithObjectID:(id)arg1 date:(double)arg2 ;
@end

