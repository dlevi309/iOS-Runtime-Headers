/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLFetchRequestContext.h>

@class NSArray, NSString;

@interface NSSQLObjectIDSetFetchRequestContext : NSSQLFetchRequestContext {

	NSArray* _idSets;
	NSString* _columnName;

}
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 idSets:(id)arg4 columnName:(id)arg5 ;
-(void)executeEpilogue;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(void)dealloc;
@end

