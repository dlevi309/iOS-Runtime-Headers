/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString, OADBaseStyles, OADDrawableDefaults;

@interface OADTheme : NSObject {

	NSString* mName;
	OADBaseStyles* mBaseStyles;
	OADDrawableDefaults* mDrawableDefaults;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) OADBaseStyles * baseStyles; 
@property (nonatomic,readonly) OADDrawableDefaults * drawableDefaults; 
-(id)init;
-(id)description;
-(NSString *)name;
-(BOOL)isEmpty;
-(void)setName:(NSString *)arg1 ;
-(OADBaseStyles *)baseStyles;
-(OADDrawableDefaults *)drawableDefaults;
-(void)validateTheme;
-(void)setBaseStyles:(OADBaseStyles *)arg1 ;
@end

