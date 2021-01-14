/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class NSMutableArray;

@interface SizeContext : NSObject {

	NSMutableArray* _windowContextStack;

}
+(id)sharedInstance;
-(id)init;
-(void)popContextFromWindow:(id)arg1 ;
-(void)pushContextWithWindow:(id)arg1 ;
-(id)windowForCurrentContext;
-(BOOL)hasWindowForCurrentContext;
@end

