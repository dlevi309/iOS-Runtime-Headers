/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <Foundation/NSDateFormatter.h>

@class NSString;

@interface CKAutoupdatingDateFormatter : NSDateFormatter {

	NSString* _template;

}

@property (nonatomic,copy) NSString * template;              //@synthesize template=_template - In the implementation block
-(id)notificationCenter;
-(NSString *)template;
-(void)setTemplate:(NSString *)arg1 ;
-(void)updateDateFormat;
-(id)initWithTemplate:(id)arg1 ;
-(void)dealloc;
@end

