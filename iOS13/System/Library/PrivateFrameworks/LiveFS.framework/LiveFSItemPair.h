/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)filename;
-(NSString *)itemId;
-(id)initWithParent:(id)arg1 fname:(id)arg2 caseSensitivity:(BOOL)arg3 ;
@end

