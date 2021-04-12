/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSDate;

@interface PHImportTimer : NSObject {

	unsigned char _type;
	unsigned char _subtype;
	id _uuid;
	NSDate* _startTime;
	NSDate* _endTime;
	unsigned long long _signpostId;

}

@property (retain) id uuid;                                    //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSDate * startTime;                         //@synthesize startTime=_startTime - In the implementation block
@property (retain) NSDate * endTime;                           //@synthesize endTime=_endTime - In the implementation block
@property (assign) unsigned char type;                         //@synthesize type=_type - In the implementation block
@property (assign) unsigned char subtype;                      //@synthesize subtype=_subtype - In the implementation block
@property (assign) unsigned long long signpostId;              //@synthesize signpostId=_signpostId - In the implementation block
-(id)description;
-(unsigned char)type;
-(void)setType:(unsigned char)arg1 ;
-(void)stop;
-(void)start;
-(id)uuid;
-(double)duration;
-(void)setUuid:(id)arg1 ;
-(unsigned char)subtype;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setSubtype:(unsigned char)arg1 ;
-(unsigned long long)signpostId;
-(void)setSignpostId:(unsigned long long)arg1 ;
-(id)initWithType:(unsigned char)arg1 subtype:(unsigned char)arg2 ;
@end

