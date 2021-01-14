/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexPath, NSString;

@interface PUTileIdentifier : NSObject <NSCopying> {

	unsigned long long _hash;
	NSIndexPath* _indexPath;
	NSString* _tileKind;
	NSString* _dataSourceIdentifier;

}

@property (nonatomic,readonly) NSIndexPath * indexPath;                      //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) NSString * tileKind;                          //@synthesize tileKind=_tileKind - In the implementation block
@property (nonatomic,readonly) NSString * dataSourceIdentifier;              //@synthesize dataSourceIdentifier=_dataSourceIdentifier - In the implementation block
-(NSString *)tileKind;
-(NSIndexPath *)indexPath;
-(NSString *)dataSourceIdentifier;
-(id)description;
-(id)initWithIndexPath:(id)arg1 tileKind:(id)arg2 dataSourceIdentifier:(id)arg3 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

