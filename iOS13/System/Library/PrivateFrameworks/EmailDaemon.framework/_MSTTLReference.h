/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class NSDate;

@interface _MSTTLReference : NSObject {

	id _value;
	double _ttl;
	NSDate* _lastSet;

}

@property (nonatomic,retain) id value;                      //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double ttl;                    //@synthesize ttl=_ttl - In the implementation block
@property (nonatomic,retain) NSDate * lastSet;              //@synthesize lastSet=_lastSet - In the implementation block
-(id)value;
-(void)setValue:(id)arg1 ;
-(double)ttl;
-(void)setTtl:(double)arg1 ;
-(id)initWithTTL:(double)arg1 ;
-(NSDate *)lastSet;
-(void)setLastSet:(NSDate *)arg1 ;
-(id)getValueWithGenerator:(/*^block*/id)arg1 ;
@end

