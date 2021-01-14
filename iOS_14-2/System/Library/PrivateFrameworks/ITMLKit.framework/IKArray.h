/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_IK8*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndexedSubscript:(long long)arg1 ;
-(id)obj1;
-(id)obj0;
-(id)objectEnumerator;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(long long)count;
-(id)lastObject;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)firstObject;
-(id)objectAtIndex:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setupWithNSArray:(id)arg1 ;
-(id)toNSArray;
-(id)initWithNSArray:(id)arg1 ;
-(NSMutableArray *)arrayStore;
-(void)setObj0:(id)arg1 ;
-(void)setObj1:(id)arg1 ;
-(void)setArrayStore:(NSMutableArray *)arg1 ;
@end

