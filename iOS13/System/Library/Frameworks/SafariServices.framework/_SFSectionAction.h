/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)handler;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
@end

