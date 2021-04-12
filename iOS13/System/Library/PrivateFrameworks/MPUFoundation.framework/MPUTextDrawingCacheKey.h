/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)allowedSize;
-(void)setAllowedSize:(CGSize)arg1 ;
@end

