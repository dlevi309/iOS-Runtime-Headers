/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)strings;
-(id)initWithStrings:(id)arg1 ;
-(id)init;
-(int)referenceForString:(id)arg1 ;
-(int)referenceForStringReadOnly:(id)arg1 ;
-(void)setStringsSet:(NSMutableOrderedSet *)arg1 ;
-(NSMutableOrderedSet *)stringsSet;
-(id)stringForReference:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

