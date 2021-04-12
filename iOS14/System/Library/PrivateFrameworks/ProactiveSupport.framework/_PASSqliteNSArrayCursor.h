/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/_PASSqliteRowIdIndexSetCursor.h>

@class NSArray;

@interface _PASSqliteNSArrayCursor : _PASSqliteRowIdIndexSetCursor {

	id _equalTo;

}

@property (nonatomic,retain) NSArray * collection; 
+(const char*)sqliteMethodName;
+(id)planningInfoForValueConstraint:(int)arg1 ;
-(id)init;
-(void)setCollection:(NSArray *)arg1 ;
-(BOOL)currentIndexedRowSatisfiesConstraints;
-(id)currentIndexedValue;
-(void)applyConstraint:(int)arg1 withArgument:(id)arg2 ;
@end

