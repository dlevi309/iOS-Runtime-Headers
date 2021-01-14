/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UITextPlaceholder.h>

@class NSArray;

@interface PKTextInputTextPlaceholder : UITextPlaceholder {

	BOOL _shouldIgnoreOrigin;
	id _placeholder;
	NSArray* __rects;

}

@property (nonatomic,retain) id placeholder;                       //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreOrigin;              //@synthesize shouldIgnoreOrigin=_shouldIgnoreOrigin - In the implementation block
@property (nonatomic,retain) NSArray * _rects;                     //@synthesize _rects=__rects - In the implementation block
+(id)placeholderWithWebTextPlaceholder:(id)arg1 ;
+(id)placeholderWithToken:(id)arg1 frame:(CGRect)arg2 ;
+(id)placeholderWithTextPlaceholder:(id)arg1 ;
+(id)placeholderWithText:(id)arg1 rects:(id)arg2 ;
-(id)rects;
-(NSArray *)_rects;
-(void)setPlaceholder:(id)arg1 ;
-(id)placeholder;
-(void)setShouldIgnoreOrigin:(BOOL)arg1 ;
-(void)set_rects:(NSArray *)arg1 ;
-(BOOL)shouldIgnoreOrigin;
@end

