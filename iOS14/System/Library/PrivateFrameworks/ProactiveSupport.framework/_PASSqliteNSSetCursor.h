/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/_PASSqliteCollectionsCursor.h>

@class NSSet, NSEnumerator;

@interface _PASSqliteNSSetCursor : _PASSqliteCollectionsCursor {

	NSSet* _set;
	id _currentValue;
	NSEnumerator* _valuesEnumerator;

}

@property (nonatomic,retain) NSSet * collection; 
+(const char*)sqliteCreateTableStatement;
+(const char*)sqliteMethodName;
+(id)planningInfoForValueConstraint:(int)arg1 ;
-(void)setCollection:(NSSet *)arg1 ;
-(BOOL)currentIndexedRowSatisfiesConstraints;
-(BOOL)currentIndexEof;
-(void)finalizeConstraints;
-(id)currentIndexedValue;
-(void)applyConstraint:(int)arg1 withArgument:(id)arg2 ;
-(void)stepIndexedRow;
@end

