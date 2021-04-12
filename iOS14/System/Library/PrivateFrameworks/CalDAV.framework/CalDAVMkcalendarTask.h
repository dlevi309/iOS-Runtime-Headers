/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSSet;

@interface CalDAVMkcalendarTask : CoreDAVTask {

	NSSet* _setElements;

}

@property (nonatomic,retain) NSSet * setElements;                                                         //@synthesize setElements=_setElements - In the implementation block
@property (assign,nonatomic) id<CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate> delegate; 
-(id)initWithURL:(id)arg1 ;
-(id)httpMethod;
-(id)description;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2 ;
-(void)setSupportForEvents:(BOOL)arg1 tasks:(BOOL)arg2 ;
-(void)setSetElements:(NSSet *)arg1 ;
-(NSSet *)setElements;
@end

