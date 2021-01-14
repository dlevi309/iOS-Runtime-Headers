/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

#import <libobjc.A.dylib/CCAsyncOperation.h>

@class CCVegaRenderer, NSString, CCVegaJSMouseEvent;

@interface CCVegaEventAsyncOperation : NSObject <CCAsyncOperation> {

	CCVegaRenderer* _renderer;
	NSString* _type;
	CCVegaJSMouseEvent* _event;

}

@property (assign,nonatomic,__weak) CCVegaRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) NSString * type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) CCVegaJSMouseEvent * event;                    //@synthesize event=_event - In the implementation block
-(void)setType:(NSString *)arg1 ;
-(CCVegaRenderer *)renderer;
-(void)setRenderer:(CCVegaRenderer *)arg1 ;
-(CCVegaJSMouseEvent *)event;
-(NSString *)type;
-(void)setEvent:(CCVegaJSMouseEvent *)arg1 ;
-(void)performOperationWithCallback:(/*^block*/id)arg1 ;
@end

