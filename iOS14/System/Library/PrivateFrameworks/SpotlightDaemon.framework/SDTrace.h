/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@class SDTraceItem, NSString;

@interface SDTrace : NSObject {

	SDTraceItem* _items[32];
	int _current;
	NSString* _title;

}

@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) int current;                 //@synthesize current=_current - In the implementation block
+(void)initialize;
-(id)initWithTitle:(id)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)items;
-(int)current;
-(id)description;
-(long long)addLabel:(id)arg1 identifier:(long long)arg2 duration:(double)arg3 string:(id)arg4 data:(id)arg5 ;
-(NSString *)title;
@end

