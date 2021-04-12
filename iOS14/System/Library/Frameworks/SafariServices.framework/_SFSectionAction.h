/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSString;

@interface _SFSectionAction : NSObject {

	NSString* _title;
	/*^block*/id _handler;

}

@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) id handler;                //@synthesize handler=_handler - In the implementation block
+(id)actionWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)toggleSectionExpandedAction;
-(void)setTitle:(NSString *)arg1 ;
-(id)handler;
-(NSString *)title;
@end

