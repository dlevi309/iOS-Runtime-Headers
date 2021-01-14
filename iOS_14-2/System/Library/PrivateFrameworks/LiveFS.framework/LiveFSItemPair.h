/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/

#import <LiveFS/LiveFS-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface LiveFSItemPair : NSObject <NSCopying> {

	NSString* _itemId;
	NSString* _filename;

}

@property (readonly) NSString * itemId;                //@synthesize itemId=_itemId - In the implementation block
@property (readonly) NSString * filename;              //@synthesize filename=_filename - In the implementation block
+(id)newWithParent:(id)arg1 fname:(id)arg2 ;
+(id)newWithParent:(id)arg1 fname:(id)arg2 caseSensitivity:(BOOL)arg3 ;
-(NSString *)itemId;
-(NSString *)filename;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithParent:(id)arg1 fname:(id)arg2 caseSensitivity:(BOOL)arg3 ;
@end

