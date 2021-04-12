/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/SWURLSchemeHandler.h>

@interface NewsUI2.NewsWebArchiveURLSchemeHandler : NSObject <SWURLSchemeHandler> {

	 task;
	 webArchiveService;

}

@property (readonly,nonatomic) id<WKURLSchemeTask> task; 
-(void)finish;
-(id<WKURLSchemeTask>)task;
-(id)init;
-(void)start;
-(void)cancel;
@end

