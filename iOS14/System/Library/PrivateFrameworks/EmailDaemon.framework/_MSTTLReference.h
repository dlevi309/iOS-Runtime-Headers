/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTtl:(double)arg1 ;
-(void)setValue:(id)arg1 ;
-(double)ttl;
-(NSDate *)lastSet;
-(id)initWithTTL:(double)arg1 ;
-(id)value;
-(void)setLastSet:(NSDate *)arg1 ;
-(id)getValueWithGenerator:(/*^block*/id)arg1 ;
@end

