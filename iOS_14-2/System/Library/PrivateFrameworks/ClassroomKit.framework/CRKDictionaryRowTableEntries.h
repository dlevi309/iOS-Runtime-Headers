/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)columnCount;
-(unsigned long long)rowCount;
-(id)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2 ;
-(id)initWithDictionaryObjects:(id)arg1 keys:(id)arg2 ;
@end

