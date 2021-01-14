/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DASDaemon.framework/DASDaemon
*/


@class NSObject;

@interface _DASLogCondition : NSObject {

	BOOL _isIdeal;
	NSObject* _condition;

}

@property (nonatomic,retain) NSObject * condition;              //@synthesize condition=_condition - In the implementation block
@property (assign,nonatomic) BOOL isIdeal;                      //@synthesize isIdeal=_isIdeal - In the implementation block
+(id)withCondition:(id)arg1 ;
-(void)setCondition:(NSObject *)arg1 ;
-(id)description;
-(BOOL)isIdeal;
-(NSObject *)condition;
-(void)setIsIdeal:(BOOL)arg1 ;
@end

