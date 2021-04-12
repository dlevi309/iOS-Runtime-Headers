/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class NSMutableArray;

@interface SizeContext : NSObject {

	NSMutableArray* _windowContextStack;

}
+(id)sharedInstance;
-(id)init;
-(void)pushContextWithWindow:(id)arg1 ;
-(void)popContextFromWindow:(id)arg1 ;
-(id)windowForCurrentContext;
-(BOOL)hasWindowForCurrentContext;
@end

