/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)getObjects:(id*)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(void)setValues:(id*)arg1 ;
-(const id*)values;
-(void)getKeys:(id*)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(NSKnownKeysMappingStrategy *)mapping;
-(id)initForKeys:(id)arg1 ;
-(id)initWithSearchStrategy:(id)arg1 ;
-(void)_setValues:(id*)arg1 retain:(BOOL)arg2 ;
-(void)setValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

