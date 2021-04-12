/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLBinaryIndex;

@interface NSSQLIndexIntermediate : NSSQLIntermediate {

	NSSQLBinaryIndex* _index;
	BOOL _isHandlingExpressions;

}
-(void)dealloc;
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)isIndexScoped;
-(id)initForIndex:(id)arg1 withScope:(id)arg2 ;
-(BOOL)isIndexExpressionScoped;
-(id)governingEntity;
-(id)_generateSQLForExpressionDescription:(id)arg1 inContext:(id)arg2 ;
@end

