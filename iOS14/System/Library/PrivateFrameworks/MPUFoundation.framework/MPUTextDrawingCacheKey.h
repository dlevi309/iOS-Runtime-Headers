/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MPUTextDrawingCacheKey : NSObject <NSCopying> {

	NSString* _text;
	CGSize _allowedSize;

}

@property (assign,nonatomic) CGSize allowedSize;              //@synthesize allowedSize=_allowedSize - In the implementation block
@property (nonatomic,copy) NSString * text;                   //@synthesize text=_text - In the implementation block
-(void)setText:(NSString *)arg1 ;
-(id)description;
-(NSString *)text;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(CGSize)allowedSize;
-(void)setAllowedSize:(CGSize)arg1 ;
@end

