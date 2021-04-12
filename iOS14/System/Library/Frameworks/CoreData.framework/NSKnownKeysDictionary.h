/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary : NSMutableDictionary

@property (nonatomic,readonly) NSKnownKeysMappingStrategy * mapping; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)newInstanceWithSearchStrategy:(id)arg1 inData:(id)arg2 ;
-(id)initForKeys:(id)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(const id*)values;
-(void)_setValues:(id*)arg1 retain:(BOOL)arg2 ;
-(void)setValues:(id*)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(id)initWithSearchStrategy:(id)arg1 ;
-(void)setValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSKnownKeysMappingStrategy *)mapping;
-(void)getKeys:(id*)arg1 ;
@end

