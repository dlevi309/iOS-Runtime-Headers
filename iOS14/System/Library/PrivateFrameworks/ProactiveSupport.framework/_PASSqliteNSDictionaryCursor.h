/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/_PASSqliteKeyValueCursor.h>

@class NSDictionary, NSEnumerator;

@interface _PASSqliteNSDictionaryCursor : _PASSqliteKeyValueCursor {

	NSDictionary* _dictionary;
	NSEnumerator* _keysEnumerator;
	id _currentKey;
	id _currentValue;
	id _valueEqualTo;

}

@property (nonatomic,retain) NSDictionary * collection; 
+(id)planningInfoForKeyConstraint:(int)arg1 ;
+(const char*)sqliteMethodName;
-(void)setCollection:(NSDictionary *)arg1 ;
-(BOOL)currentIndexedRowSatisfiesConstraints;
-(void)finalizeConstraints;
-(id)currentIndexedValue;
-(void)applyKeyConstraint:(int)arg1 withArgument:(id)arg2 ;
-(void)stepIndexedRow;
-(id)currentIndexedKey;
@end

