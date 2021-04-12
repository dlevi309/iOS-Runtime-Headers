/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class AMSUIWebClientContext, NSArray, NSString;

@interface AMSUIWebMetricsAction : NSObject <AMSUIWebActionRunnable> {

	BOOL _shouldFlush;
	AMSUIWebClientContext* _context;
	NSArray* _events;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * events;                             //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) BOOL shouldFlush;                             //@synthesize shouldFlush=_shouldFlush - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(NSArray *)events;
-(void)setEvents:(NSArray *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(BOOL)shouldFlush;
-(void)setShouldFlush:(BOOL)arg1 ;
@end

