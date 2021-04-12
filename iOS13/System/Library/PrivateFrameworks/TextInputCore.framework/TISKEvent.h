/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(unsigned long long)order;
-(BOOL)hasTimestamp;
-(void)setOrder:(unsigned long long)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(TISKTap *)tap;
-(id)upTouchEvent;
-(id)downTouchEvent;
-(double)touchDownTimestamp;
-(double)touchUpTimestamp;
-(void)reportToSession:(id)arg1 ;
-(void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2 ;
-(id)init:(int)arg1 order:(long long)arg2 ;
-(id)init:(int)arg1 order:(long long)arg2 tap:(id)arg3 ;
-(BOOL)isMissingATouch;
-(BOOL)isValidCandidate:(id)arg1 ;
-(void)setTap:(TISKTap *)arg1 ;
@end

