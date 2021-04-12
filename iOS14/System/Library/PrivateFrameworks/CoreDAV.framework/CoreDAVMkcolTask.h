/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithURL:(id)arg1 ;
-(id)additionalHeaderValues;
-(id)httpMethod;
-(id)description;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(int)absoluteOrder;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(void)setAbsoluteOrder:(int)arg1 ;
-(void)setPriorOrderedURL:(NSURL *)arg1 ;
-(NSURL *)priorOrderedURL;
-(id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2 ;
-(NSSet *)propertiesToSet;
-(void)setPropertiesToSet:(NSSet *)arg1 ;
@end

