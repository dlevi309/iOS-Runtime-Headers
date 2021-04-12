/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PXCuratedLibraryLabelConfiguration : NSObject <NSCopying> {

	NSString* _text;
	long long _textAlignment;

}

@property (nonatomic,copy) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long textAlignment;              //@synthesize textAlignment=_textAlignment - In the implementation block
-(void)setText:(NSString *)arg1 ;
-(long long)textAlignment;
-(NSString *)text;
-(unsigned long long)hash;
-(void)setTextAlignment:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

