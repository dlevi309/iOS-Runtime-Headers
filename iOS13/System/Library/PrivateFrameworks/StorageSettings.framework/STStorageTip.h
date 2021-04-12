/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/


@class PSSpecifier, NSString, UIImage;

@interface STStorageTip : NSObject {

	PSSpecifier* _infoSpecifier;
	NSString* _identifier;
	PSSpecifier* _specifier;

}

@property (retain) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (retain) PSSpecifier * specifier;                              //@synthesize specifier=_specifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * infoSpecifier;              //@synthesize infoSpecifier=_infoSpecifier - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * infoText; 
@property (nonatomic,retain) UIImage * icon; 
@property (assign,nonatomic) long long size; 
@property (nonatomic,retain) NSString * representedApp; 
-(id)init;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(NSString *)identifier;
-(long long)size;
-(PSSpecifier *)specifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSize:(long long)arg1 ;
-(void)reload;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(void)setRepresentedApp:(NSString *)arg1 ;
-(void)setInfoText:(NSString *)arg1 ;
-(NSString *)infoText;
-(PSSpecifier *)infoSpecifier;
-(NSString *)representedApp;
@end

