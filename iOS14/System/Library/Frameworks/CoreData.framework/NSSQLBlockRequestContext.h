/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@interface NSSQLBlockRequestContext : NSSQLStoreRequestContext {

	/*^block*/id _workBlock;

}
-(BOOL)isWritingRequest;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(void)dealloc;
@end

