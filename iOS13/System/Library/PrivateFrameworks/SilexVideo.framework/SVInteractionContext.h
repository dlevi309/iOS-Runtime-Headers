/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVInteractionContext.h>
@class UIView;


@protocol SVInteractionContext <NSObject>
@property (nonatomic,readonly) UIView * sourceView; 
@property (nonatomic,readonly) CGRect sourceRect; 
@required
-(UIView *)sourceView;
-(CGRect)sourceRect;

@end


@class UIView, NSString;

@interface SVInteractionContext : NSObject <SVInteractionContext> {

	UIView* _sourceView;
	CGRect _sourceRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * sourceView;                 //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,readonly) CGRect sourceRect;                   //@synthesize sourceRect=_sourceRect - In the implementation block
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(id)initWithSourceView:(id)arg1 sourceRect:(CGRect)arg2 ;
@end

