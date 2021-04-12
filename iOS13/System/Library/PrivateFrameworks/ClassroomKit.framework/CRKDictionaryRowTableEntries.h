/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKTableEntries.h>

@class NSArray, NSString;

@interface CRKDictionaryRowTableEntries : NSObject <CRKTableEntries> {

	NSArray* mObjects;
	NSArray* mKeys;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)rowCount;
-(unsigned long long)columnCount;
-(id)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2 ;
-(id)initWithDictionaryObjects:(id)arg1 keys:(id)arg2 ;
@end

