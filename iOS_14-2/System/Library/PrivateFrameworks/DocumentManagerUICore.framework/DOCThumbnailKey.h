/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<NSCopying>)primaryKey;
-(DOCThumbnailDescriptor *)descriptor;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPrimaryKey:(id)arg1 descriptor:(id)arg2 ;
@end

