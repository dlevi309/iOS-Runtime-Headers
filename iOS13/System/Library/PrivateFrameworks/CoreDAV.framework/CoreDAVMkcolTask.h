/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSSet, NSURL;

@interface CoreDAVMkcolTask : CoreDAVActionBackedTask {

	NSSet* _propertiesToSet;
	BOOL _sendOrder;
	int _absoluteOrder;
	NSURL* _priorOrderedURL;

}

@property (nonatomic,retain) NSSet * propertiesToSet;                              //@synthesize propertiesToSet=_propertiesToSet - In the implementation block
@property (assign,nonatomic,__weak) id<CoreDAVTaskDelegate> delegate; 
@property (nonatomic,retain) NSURL * priorOrderedURL;                              //@synthesize priorOrderedURL=_priorOrderedURL - In the implementation block
@property (assign,nonatomic) int absoluteOrder;                                    //@synthesize absoluteOrder=_absoluteOrder - In the implementation block
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(id)httpMethod;
-(id)requestBody;
-(id)additionalHeaderValues;
-(id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(int)absoluteOrder;
-(void)setAbsoluteOrder:(int)arg1 ;
-(void)setPriorOrderedURL:(NSURL *)arg1 ;
-(NSURL *)priorOrderedURL;
-(NSSet *)propertiesToSet;
-(void)setPropertiesToSet:(NSSet *)arg1 ;
@end

