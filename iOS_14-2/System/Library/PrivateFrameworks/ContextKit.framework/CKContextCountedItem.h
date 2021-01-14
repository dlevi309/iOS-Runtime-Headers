/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKContextCountedItem : NSObject <NSSecureCoding> {

	id _item;
	unsigned long long _count;

}

@property (nonatomic,retain) id item;                               //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)item:(id)arg1 withCount:(unsigned long long)arg2 ;
-(void)setCount:(unsigned long long)arg1 ;
-(id)item;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(void)setItem:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

