/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXQuickLookRenderer.h>

@protocol SXQuickLookRenderer <NSObject>
@required
-(void)render:(id)arg1 attributes:(id)arg2;
-(void)renderThumbnailImage:(id)arg1 view:(id)arg2;
-(void)renderErrorMessage:(id)arg1 view:(id)arg2;

@end


@protocol SXQuickLookStyler;
@class NSString;

@interface SXQuickLookRenderer : NSObject <SXQuickLookRenderer> {

	id<SXQuickLookStyler> _styler;

}

@property (nonatomic,readonly) id<SXQuickLookStyler> styler;              //@synthesize styler=_styler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXQuickLookStyler>)styler;
-(id)initWithStyler:(id)arg1 ;
-(void)render:(id)arg1 attributes:(id)arg2 ;
-(void)renderThumbnailImage:(id)arg1 view:(id)arg2 ;
-(void)renderErrorMessage:(id)arg1 view:(id)arg2 ;
@end

