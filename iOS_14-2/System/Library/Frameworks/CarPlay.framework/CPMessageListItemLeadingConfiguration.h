/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPImageSet, UIImage;

@interface CPMessageListItemLeadingConfiguration : NSObject <NSSecureCoding> {

	BOOL _unread;
	long long _leadingItem;
	CPImageSet* _leadingImageSet;

}

@property (nonatomic,retain) CPImageSet * leadingImageSet;               //@synthesize leadingImageSet=_leadingImageSet - In the implementation block
@property (getter=isUnread,nonatomic,readonly) BOOL unread;              //@synthesize unread=_unread - In the implementation block
@property (nonatomic,readonly) long long leadingItem;                    //@synthesize leadingItem=_leadingItem - In the implementation block
@property (nonatomic,readonly) UIImage * leadingImage; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(UIImage *)leadingImage;
-(BOOL)isUnread;
-(id)initWithLeadingItem:(long long)arg1 leadingImage:(id)arg2 unread:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)leadingItem;
-(CPImageSet *)leadingImageSet;
-(void)setLeadingImageSet:(CPImageSet *)arg1 ;
@end

