/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSString;

@interface WFNotificationActionAlert : NSObject {

	NSString* _title;
	NSString* _body;

}

@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;               //@synthesize body=_body - In the implementation block
-(NSString *)body;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 body:(id)arg2 ;
@end

