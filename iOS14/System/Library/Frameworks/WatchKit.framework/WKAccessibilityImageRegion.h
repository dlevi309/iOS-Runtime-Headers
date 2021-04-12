/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/


#import <WatchKit/WatchKit-Structs.h>
@class NSString;

@interface WKAccessibilityImageRegion : NSObject {

	NSString* _label;
	CGRect _frame;

}

@property (assign,nonatomic) CGRect frame;                //@synthesize frame=_frame - In the implementation block
@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
@end

