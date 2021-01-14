/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithEntries:(id)arg1 ;
-(NSString *)stringValue;
-(id)columnLengths;
-(unsigned long long)lengthOfLongestObjectInColumn:(unsigned long long)arg1 ;
@end

