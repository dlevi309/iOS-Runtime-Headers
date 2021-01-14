/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned char)subtype;
-(id)uuid;
-(void)start;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setType:(unsigned char)arg1 ;
-(void)stop;
-(id)description;
-(id)initWithType:(unsigned char)arg1 subtype:(unsigned char)arg2 ;
-(unsigned char)type;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setSignpostId:(unsigned long long)arg1 ;
-(void)setSubtype:(unsigned char)arg1 ;
-(void)setUuid:(id)arg1 ;
-(NSDate *)endTime;
-(double)duration;
-(unsigned long long)signpostId;
-(NSDate *)startTime;
@end

