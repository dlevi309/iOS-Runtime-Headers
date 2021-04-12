/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)index;
-(NSString *)elementKind;
-(id)initWithElementKind:(id)arg1 index:(long long)arg2 auxillaryKind:(long long)arg3 isSupplementary:(BOOL)arg4 ;
-(BOOL)isSupplementary;
-(long long)auxillaryKind;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

