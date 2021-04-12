/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIImage * icon; 
+(id)responseWithURL:(id)arg1 touchIcon:(id)arg2 generated:(BOOL)arg3 extractedBackgroundColor:(id)arg4 ;
-(NSString *)description;
-(id)initWithURL:(id)arg1 ;
-(UIImage *)icon;
-(BOOL)isGenerated;
-(UIImage *)touchIcon;
-(UIColor *)extractedBackgroundColor;
-(id)initWithURL:(id)arg1 touchIcon:(id)arg2 generated:(BOOL)arg3 extractedBackgroundColor:(id)arg4 ;
@end

