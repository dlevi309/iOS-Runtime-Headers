/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/WBSSiteMetadataResponse.h>
#import <libobjc.A.dylib/WBSIconResponse.h>

@class UIImage, UIColor, NSString;

@interface WBSTouchIconResponse : WBSSiteMetadataResponse <WBSIconResponse> {

	BOOL _generated;
	UIImage* _touchIcon;
	UIColor* _extractedBackgroundColor;

}

@property (nonatomic,readonly) UIImage * touchIcon;                             //@synthesize touchIcon=_touchIcon - In the implementation block
@property (nonatomic,readonly) UIColor * extractedBackgroundColor;              //@synthesize extractedBackgroundColor=_extractedBackgroundColor - In the implementation block
@property (getter=isGenerated,nonatomic,readonly) BOOL generated;               //@synthesize generated=_generated - In the implementation block
@property (nonatomic,readonly) UIImage * icon; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)responseWithURL:(id)arg1 touchIcon:(id)arg2 generated:(BOOL)arg3 extractedBackgroundColor:(id)arg4 ;
-(id)initWithURL:(id)arg1 ;
-(UIImage *)icon;
-(NSString *)description;
-(UIImage *)touchIcon;
-(id)initWithURL:(id)arg1 touchIcon:(id)arg2 generated:(BOOL)arg3 extractedBackgroundColor:(id)arg4 ;
-(UIColor *)extractedBackgroundColor;
-(BOOL)isGenerated;
@end

