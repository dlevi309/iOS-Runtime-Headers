/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@class NSString;

@interface QLDismissAction : NSObject {

	BOOL _shouldDismissQuickLookAutomatically;
	NSString* _title;
	/*^block*/id _completionHandler;
	long long _alertStyle;

}

@property (nonatomic,copy) id completionHandler;                                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long alertStyle;                                  //@synthesize alertStyle=_alertStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissQuickLookAutomatically;              //@synthesize shouldDismissQuickLookAutomatically=_shouldDismissQuickLookAutomatically - In the implementation block
+(id)actionWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)actionWithTitle:(id)arg1 alertStyle:(long long)arg2 shouldDismissQuickLookAutomatically:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(long long)alertStyle;
-(void)setAlertStyle:(long long)arg1 ;
-(id)initWithTitle:(id)arg1 alertStyle:(long long)arg2 shouldDismissQuickLookAutomatically:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)shouldDismissQuickLookAutomatically;
-(void)setShouldDismissQuickLookAutomatically:(BOOL)arg1 ;
@end

