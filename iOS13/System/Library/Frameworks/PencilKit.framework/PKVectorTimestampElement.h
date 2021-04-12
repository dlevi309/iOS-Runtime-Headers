/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@interface PKVectorTimestampElement : NSObject {

	unsigned long long _clock;
	unsigned long long _subclock;

}

@property (assign,nonatomic) unsigned long long clock;                 //@synthesize clock=_clock - In the implementation block
@property (assign,nonatomic) unsigned long long subclock;              //@synthesize subclock=_subclock - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)clock;
-(void)setClock:(unsigned long long)arg1 ;
-(unsigned long long)subclock;
-(void)setSubclock:(unsigned long long)arg1 ;
@end

