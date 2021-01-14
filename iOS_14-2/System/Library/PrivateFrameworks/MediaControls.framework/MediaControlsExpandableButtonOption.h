/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/


@class NSString, UIColor;

@interface MediaControlsExpandableButtonOption : NSObject {

	BOOL _supportsAnimation;
	NSString* _identifier;
	NSString* _packageName;
	NSString* _title;
	UIColor* _selectedBackgroundColor;

}

@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * packageName;                         //@synthesize packageName=_packageName - In the implementation block
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIColor * selectedBackgroundColor;              //@synthesize selectedBackgroundColor=_selectedBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL supportsAnimation;                         //@synthesize supportsAnimation=_supportsAnimation - In the implementation block
-(BOOL)supportsAnimation;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)packageName;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(void)setSelectedBackgroundColor:(UIColor *)arg1 ;
-(void)setPackageName:(NSString *)arg1 ;
-(void)setSupportsAnimation:(BOOL)arg1 ;
-(UIColor *)selectedBackgroundColor;
@end

