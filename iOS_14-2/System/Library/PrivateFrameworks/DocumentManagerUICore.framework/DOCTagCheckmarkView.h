/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/DOCTagIconView.h>

@class NSString;

@interface DOCTagCheckmarkView : UIImageView <DOCTagIconView> {

	long long _tagColor;

}

@property (assign,nonatomic) long long tagColor;                    //@synthesize tagColor=_tagColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)checkmarkImage;
-(void)_updateTintColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTagColor:(long long)arg1 ;
-(long long)tagColor;
@end

