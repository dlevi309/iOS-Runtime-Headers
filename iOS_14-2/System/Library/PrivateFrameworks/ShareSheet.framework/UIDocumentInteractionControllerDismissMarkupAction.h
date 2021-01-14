/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/


@class NSString;

@interface UIDocumentInteractionControllerDismissMarkupAction : NSObject {

	NSString* _title;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)actionWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)completionHandler;
-(id)initWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(NSString *)title;
@end

