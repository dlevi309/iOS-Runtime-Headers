/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSSet;

@interface CalDAVMkcalendarTask : CoreDAVTask {

	NSSet* _setElements;

}

@property (nonatomic,retain) NSSet * setElements;                                                         //@synthesize setElements=_setElements - In the implementation block
@property (assign,nonatomic) id<CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate> delegate; 
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(id)httpMethod;
-(id)requestBody;
-(id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2 ;
-(void)setSupportForEvents:(BOOL)arg1 tasks:(BOOL)arg2 ;
-(void)setSetElements:(NSSet *)arg1 ;
-(NSSet *)setElements;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
@end

