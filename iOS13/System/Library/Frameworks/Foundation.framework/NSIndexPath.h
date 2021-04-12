/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long* _indexes;
	unsigned long long _length;
	void* _reserved;

}

@property (readonly) unsigned long long length; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)indexPathWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2 ;
+(id)indexPath;
+(id)indexPathWithIndex:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)indexAtPosition:(unsigned long long)arg1 ;
-(void)getIndexes:(unsigned long long*)arg1 range:(NSRange)arg2 ;
-(id)initWithIndex:(unsigned long long)arg1 ;
-(void)getIndexes:(unsigned long long*)arg1 ;
-(id)indexPathByRemovingLastIndex;
-(id)indexPathByAddingIndex:(unsigned long long)arg1 ;
@end

