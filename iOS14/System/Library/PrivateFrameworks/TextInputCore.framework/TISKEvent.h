/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TISKEventProtocol.h>

@class TISKTap;

@interface TISKEvent : NSObject <TISKEventProtocol> {

	BOOL _hasTimestamp;
	int _type;
	TISKTap* _tap;
	unsigned long long _order;

}

@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) TISKTap * tap;                         //@synthesize tap=_tap - In the implementation block
@property (assign,nonatomic) unsigned long long order;              //@synthesize order=_order - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp;                     //@synthesize hasTimestamp=_hasTimestamp - In the implementation block
-(TISKTap *)tap;
-(void)setType:(int)arg1 ;
-(void)setTap:(TISKTap *)arg1 ;
-(id)description;
-(int)type;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned long long)order;
-(void)setOrder:(unsigned long long)arg1 ;
-(double)touchDownTimestamp;
-(id)upTouchEvent;
-(id)downTouchEvent;
-(double)touchUpTimestamp;
-(void)reportToSession:(id)arg1 ;
-(void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2 ;
-(id)init:(int)arg1 order:(long long)arg2 ;
-(id)init:(int)arg1 order:(long long)arg2 tap:(id)arg3 ;
-(BOOL)isMissingATouch;
-(BOOL)isValidCandidate:(id)arg1 ;
@end

