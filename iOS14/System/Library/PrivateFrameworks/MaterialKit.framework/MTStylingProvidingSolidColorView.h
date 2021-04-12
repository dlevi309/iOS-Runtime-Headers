/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTVisualStylingProviding.h>

@class NSMutableDictionary, NSString;

@interface MTStylingProvidingSolidColorView : UIView <MTVisualStylingProviding> {

	NSMutableDictionary* _stylingProviders;

}

@property (nonatomic,retain) NSMutableDictionary * stylingProviders;              //@synthesize stylingProviders=_stylingProviders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(id)stylingProvidingSolidColorLayer;
-(NSMutableDictionary *)stylingProviders;
-(void)setStylingProviders:(NSMutableDictionary *)arg1 ;
@end

