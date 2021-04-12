/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLFetchRequestContext.h>

@class NSArray, NSString;

@interface NSSQLObjectIDSetFetchRequestContext : NSSQLFetchRequestContext {

	NSArray* _idSets;
	NSString* _columnName;

}
-(void)dealloc;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(void)executeEpilogue;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 idSets:(id)arg4 columnName:(id)arg5 ;
@end

