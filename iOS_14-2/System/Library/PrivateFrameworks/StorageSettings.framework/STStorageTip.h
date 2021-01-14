/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/


#import <StorageSettings/StorageSettings-Structs.h>
@class PSSpecifier, NSString, UIImage;

@interface STStorageTip : NSObject {

	PSSpecifier* _infoSpecifier;
	os_unfair_lock_s _specLock;
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
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)specifier;
-(void)setInfoText:(NSString *)arg1 ;
-(void)setRepresentedApp:(NSString *)arg1 ;
-(id)init;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(long long)size;
-(UIImage *)icon;
-(void)setTitle:(NSString *)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setSize:(long long)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(void)reload;
-(NSString *)infoText;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(PSSpecifier *)infoSpecifier;
-(void)_reload:(id)arg1 ;
-(NSString *)representedApp;
@end

