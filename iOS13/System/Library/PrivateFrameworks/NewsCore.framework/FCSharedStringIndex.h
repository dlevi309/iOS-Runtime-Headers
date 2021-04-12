/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableOrderedSet, NSArray;

@interface FCSharedStringIndex : NSObject <NSCopying> {

	NSMutableOrderedSet* _stringsSet;

}

@property (nonatomic,retain) NSMutableOrderedSet * stringsSet;              //@synthesize stringsSet=_stringsSet - In the implementation block
@property (nonatomic,readonly) NSArray * strings; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)strings;
-(id)stringForReference:(int)arg1 ;
-(id)initWithStrings:(id)arg1 ;
-(int)referenceForString:(id)arg1 ;
-(NSMutableOrderedSet *)stringsSet;
-(int)referenceForStringReadOnly:(id)arg1 ;
-(void)setStringsSet:(NSMutableOrderedSet *)arg1 ;
@end

