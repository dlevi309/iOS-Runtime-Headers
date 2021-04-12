/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/

#import <vCard/vCard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSData, NSDictionary;

@interface CNVCardImage : NSObject <NSCopying, NSMutableCopying> {

	NSData* _data;
	NSDictionary* _cropRects;
	CGSize _size;

}

@property (nonatomic,copy,readonly) NSData * data;                         //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * cropRects;              //@synthesize cropRects=_cropRects - In the implementation block
@property (nonatomic,readonly) CGSize size;                                //@synthesize size=_size - In the implementation block
+(CGSize)sizeOfImageData:(id)arg1 ;
-(id)init;
-(CGSize)size;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)data;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)cropRects;
-(id)initWithData:(id)arg1 cropRects:(id)arg2 size:(CGSize)arg3 ;
-(void)describePropertiesWithBuilder:(id)arg1 ;
-(id)initWithData:(id)arg1 cropRects:(id)arg2 ;
@end

