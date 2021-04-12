/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSString;

@interface PKPassSecurePreviewContext : NSObject {

	CGImageRef _image;
	NSString* _backgroundColor;
	NSString* _primaryText;
	NSString* _primaryColor;
	NSString* _secondaryText;
	NSString* _secondaryColor;
	NSString* _tertiaryText;
	NSString* _tertiaryColor;

}

@property (nonatomic,copy) NSString * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * primaryText;                  //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy) NSString * primaryColor;                 //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;                //@synthesize secondaryText=_secondaryText - In the implementation block
@property (nonatomic,copy) NSString * secondaryColor;               //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (nonatomic,copy) NSString * tertiaryText;                 //@synthesize tertiaryText=_tertiaryText - In the implementation block
@property (nonatomic,copy) NSString * tertiaryColor;                //@synthesize tertiaryColor=_tertiaryColor - In the implementation block
@property (nonatomic,readonly) CGImageRef image;                    //@synthesize image=_image - In the implementation block
-(void)setImage:(CGImageRef)arg1 ;
-(id)init;
-(NSString *)secondaryColor;
-(void)setPrimaryColor:(NSString *)arg1 ;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(CGImageRef)image;
-(NSString *)backgroundColor;
-(NSString *)primaryText;
-(NSString *)tertiaryText;
-(void)setTertiaryText:(NSString *)arg1 ;
-(void)setTertiaryColor:(NSString *)arg1 ;
-(id)_initWithBackgroundColor:(id)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 tertiaryColor:(id)arg4 ;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(NSString *)primaryColor;
-(NSString *)tertiaryColor;
-(void)setSecondaryColor:(NSString *)arg1 ;
-(void)dealloc;
@end

