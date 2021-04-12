/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
*/


@class NSString;

@interface GPURawCounterSelect : NSObject {

	unsigned _width;
	NSString* _name;

}

@property (copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign) unsigned width;                      //@synthesize width=_width - In the implementation block
+(id)selectWithName:(id)arg1 width:(unsigned)arg2 ;
+(id)selectWithName:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(unsigned)width;
-(void)setWidth:(unsigned)arg1 ;
-(id)initWithName:(id)arg1 width:(unsigned)arg2 ;
@end

