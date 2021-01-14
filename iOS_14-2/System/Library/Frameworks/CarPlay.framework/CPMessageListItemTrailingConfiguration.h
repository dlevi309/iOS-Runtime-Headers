/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPImageSet, UIImage;

@interface CPMessageListItemTrailingConfiguration : NSObject <NSSecureCoding> {

	long long _trailingItem;
	CPImageSet* _trailingImageSet;

}

@property (nonatomic,retain) CPImageSet * trailingImageSet;              //@synthesize trailingImageSet=_trailingImageSet - In the implementation block
@property (nonatomic,readonly) long long trailingItem;                   //@synthesize trailingItem=_trailingItem - In the implementation block
@property (nonatomic,readonly) UIImage * trailingImage; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(UIImage *)trailingImage;
-(id)initWithCoder:(id)arg1 ;
-(long long)trailingItem;
-(CPImageSet *)trailingImageSet;
-(id)initWithTrailingItem:(long long)arg1 trailingImage:(id)arg2 ;
-(void)setTrailingImageSet:(CPImageSet *)arg1 ;
@end

