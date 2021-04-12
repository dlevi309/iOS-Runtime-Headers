/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDictionary;

@interface BBAccessoryIcon : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _imagesForContentSize;

}

@property (nonatomic,copy) NSDictionary * imagesForContentSize;              //@synthesize imagesForContentSize=_imagesForContentSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)imagesForContentSize;
-(void)setImagesForContentSize:(NSDictionary *)arg1 ;
-(void)addImage:(id)arg1 forContentSizeCategory:(id)arg2 ;
-(id)imageForContentSizeCategory:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

