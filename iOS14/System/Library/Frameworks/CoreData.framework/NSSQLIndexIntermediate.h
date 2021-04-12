/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLBinaryIndex;

@interface NSSQLIndexIntermediate : NSSQLIntermediate {

	NSSQLBinaryIndex* _index;
	BOOL _isHandlingExpressions;

}
-(id)governingEntity;
-(BOOL)isIndexScoped;
-(id)initForIndex:(id)arg1 withScope:(id)arg2 ;
-(BOOL)isIndexExpressionScoped;
-(id)_generateSQLForExpressionDescription:(id)arg1 inContext:(id)arg2 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(void)dealloc;
@end

