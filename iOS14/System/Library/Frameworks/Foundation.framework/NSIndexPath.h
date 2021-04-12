/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)bs_emptyPath;
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)indexPath;
+(id)indexPathWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2 ;
+(id)indexPathWithIndex:(unsigned long long)arg1 ;
-(id)bs_subpathWithRange:(NSRange)arg1 ;
-(id)bs_subpathFromPosition:(unsigned long long)arg1 ;
-(id)bs_indexPathByRemovingFirstIndex;
-(id)bs_indexPathByAddingPrefix:(id)arg1 ;
-(BOOL)bs_hasPrefix:(id)arg1 ;
-(id)bs_nearestCommonAncestorWithIndexPath:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)init;
-(void)getIndexes:(unsigned long long*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)length;
-(id)indexPathByRemovingLastIndex;
-(id)initWithIndex:(unsigned long long)arg1 ;
-(void)getIndexes:(unsigned long long*)arg1 range:(NSRange)arg2 ;
-(unsigned long long)indexAtPosition:(unsigned long long)arg1 ;
-(id)description;
-(id)initWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2 ;
-(id)indexPathByAddingIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

