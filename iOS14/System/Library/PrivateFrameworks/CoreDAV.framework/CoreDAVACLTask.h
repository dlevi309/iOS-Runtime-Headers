/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSArray;

@interface CoreDAVACLTask : CoreDAVTask {

	NSArray* _accessControlEntities;

}

@property (nonatomic,retain) NSArray * accessControlEntities;                         //@synthesize accessControlEntities=_accessControlEntities - In the implementation block
@property (assign,nonatomic,__weak) id<CoreDAVACLTaskDelegate> delegate; 
-(id)initWithURL:(id)arg1 ;
-(id)httpMethod;
-(id)description;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(NSArray *)accessControlEntities;
-(void)setAccessControlEntities:(NSArray *)arg1 ;
-(id)initWithAccessControlEntities:(id)arg1 atURL:(id)arg2 ;
@end

