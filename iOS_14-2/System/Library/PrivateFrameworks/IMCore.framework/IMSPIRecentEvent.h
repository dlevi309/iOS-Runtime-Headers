/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSString, NSDate;

@interface IMSPIRecentEvent : NSObject {

	NSString* _handle;
	NSDate* _date;
	NSString* _labelID;

}

@property (retain) NSString * handle;               //@synthesize handle=_handle - In the implementation block
@property (retain) NSString * labelID;              //@synthesize labelID=_labelID - In the implementation block
@property (retain) NSDate * date;                   //@synthesize date=_date - In the implementation block
-(NSString *)labelID;
-(void)setHandle:(NSString *)arg1 ;
-(void)setLabelID:(NSString *)arg1 ;
-(NSString *)handle;
-(void)setDate:(NSDate *)arg1 ;
-(id)description;
-(NSDate *)date;
-(id)initWithHandle:(id)arg1 date:(id)arg2 ;
-(id)initWithLabelID:(id)arg1 date:(id)arg2 ;
@end

