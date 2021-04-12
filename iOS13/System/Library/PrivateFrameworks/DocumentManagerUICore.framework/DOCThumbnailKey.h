/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class NSObject, DOCThumbnailDescriptor;

@interface DOCThumbnailKey : NSObject <NSCopying> {

	NSObject*<NSCopying> _primaryKey;
	DOCThumbnailDescriptor* _descriptor;

}

@property (nonatomic,readonly) NSObject*<NSCopying> primaryKey;                  //@synthesize primaryKey=_primaryKey - In the implementation block
@property (nonatomic,readonly) DOCThumbnailDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(DOCThumbnailDescriptor *)descriptor;
-(NSObject*<NSCopying>)primaryKey;
-(id)initWithPrimaryKey:(id)arg1 descriptor:(id)arg2 ;
@end

