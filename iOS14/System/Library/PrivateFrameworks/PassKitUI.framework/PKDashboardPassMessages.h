/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class NSOrderedSet, NSString;

@interface PKDashboardPassMessages : NSObject <PKDashboardItem> {

	NSOrderedSet* _messages;

}

@property (nonatomic,retain) NSOrderedSet * messages;               //@synthesize messages=_messages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(void)setMessages:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)messages;
@end

