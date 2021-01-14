/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEvents:(NSArray *)arg1 ;
-(AMSUIWebClientContext *)context;
-(NSArray *)events;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(BOOL)shouldFlush;
-(void)setShouldFlush:(BOOL)arg1 ;
@end

