/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <Foundation/NSDateFormatter.h>

@class NSString;

@interface CKAutoupdatingDateFormatter : NSDateFormatter {

	NSString* _template;

}

@property (nonatomic,copy) NSString * template;              //@synthesize template=_template - In the implementation block
-(void)dealloc;
-(id)notificationCenter;
-(id)initWithTemplate:(id)arg1 ;
-(void)setTemplate:(NSString *)arg1 ;
-(void)updateDateFormat;
-(NSString *)template;
@end

