/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/CRCoding.h>

@class NSArray, NSString;

@interface CRTuple : NSObject <CRDataType, CRCoding> {

	NSArray* _contents;

}

@property (nonatomic,retain) NSArray * contents;                    //@synthesize contents=_contents - In the implementation block
@property (readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tupleWithArray:(id)arg1 ;
-(NSArray *)contents;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)setDocument:(id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(unsigned long long)count;
-(void)mergeWith:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(NSString *)description;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)setContents:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(id)tombstone;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
@end

