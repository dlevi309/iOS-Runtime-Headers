/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(int)current;
-(id)items;
-(id)initWithTitle:(id)arg1 ;
-(long long)addLabel:(id)arg1 identifier:(long long)arg2 duration:(double)arg3 string:(id)arg4 data:(id)arg5 ;
@end

