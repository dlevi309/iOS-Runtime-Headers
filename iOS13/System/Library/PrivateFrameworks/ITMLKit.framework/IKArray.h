/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface IKArray : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration> {

	id _obj0;
	id _obj1;
	NSMutableArray* _arrayStore;

}

@property (nonatomic,retain) id obj0;                                  //@synthesize obj0=_obj0 - In the implementation block
@property (nonatomic,retain) id obj1;                                  //@synthesize obj1=_obj1 - In the implementation block
@property (nonatomic,retain) NSMutableArray * arrayStore;              //@synthesize arrayStore=_arrayStore - In the implementation block
+(id)array;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)count;
-(id)objectEnumerator;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_IK8*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(long long)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)objectAtIndexedSubscript:(long long)arg1 ;
-(id)firstObject;
-(id)lastObject;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)_setupWithNSArray:(id)arg1 ;
-(id)toNSArray;
-(id)initWithNSArray:(id)arg1 ;
-(NSMutableArray *)arrayStore;
-(id)obj1;
-(id)obj0;
-(void)setObj0:(id)arg1 ;
-(void)setObj1:(id)arg1 ;
-(void)setArrayStore:(NSMutableArray *)arg1 ;
@end

