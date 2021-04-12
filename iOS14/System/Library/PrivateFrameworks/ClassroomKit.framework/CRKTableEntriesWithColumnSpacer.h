/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKTableEntries.h>

@protocol CRKTableEntries, CRKTableEntry;
@class NSString;

@interface CRKTableEntriesWithColumnSpacer : NSObject <CRKTableEntries> {

	id<CRKTableEntries> mOrigin;
	unsigned long long mIndex;
	id<CRKTableEntry> mSpacerEntry;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)columnCount;
-(unsigned long long)rowCount;
-(id)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2 ;
-(id)initWithOrigin:(id)arg1 index:(unsigned long long)arg2 spacerEntry:(id)arg3 ;
@end

