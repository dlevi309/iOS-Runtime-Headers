/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKTableEntries;
@class NSString;

@interface CRKTable : NSObject {

	id<CRKTableEntries> mEntries;

}

@property (nonatomic,copy,readonly) NSString * stringValue; 
+(id)tableWithHeaders:(id)arg1 keyPaths:(id)arg2 objects:(id)arg3 ;
+(id)parsableTableWithKeyValuePairs:(id)arg1 ;
-(NSString *)stringValue;
-(id)initWithEntries:(id)arg1 ;
-(id)columnLengths;
-(unsigned long long)lengthOfLongestObjectInColumn:(unsigned long long)arg1 ;
@end

