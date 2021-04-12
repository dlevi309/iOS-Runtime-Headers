/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UICollectionLayoutAuxillaryKey : NSObject <NSCopying> {

	BOOL _isSupplementary;
	NSString* _elementKind;
	long long _index;
	long long _auxillaryKind;

}

@property (nonatomic,readonly) NSString * elementKind;               //@synthesize elementKind=_elementKind - In the implementation block
@property (nonatomic,readonly) long long index;                      //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) long long auxillaryKind;              //@synthesize auxillaryKind=_auxillaryKind - In the implementation block
@property (nonatomic,readonly) BOOL isSupplementary;                 //@synthesize isSupplementary=_isSupplementary - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)index;
-(BOOL)isSupplementary;
-(NSString *)elementKind;
-(long long)auxillaryKind;
-(id)initWithElementKind:(id)arg1 index:(long long)arg2 auxillaryKind:(long long)arg3 isSupplementary:(BOOL)arg4 ;
@end

