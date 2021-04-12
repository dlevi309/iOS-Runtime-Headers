/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSString, NSBundle;

@interface SKUIExternalResourceImage : NSObject {

	BOOL _alwaysTemplate;
	NSString* _imageName;
	NSBundle* _bundle;

}

@property (nonatomic,copy) NSString * imageName;               //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,retain) NSBundle * bundle;                //@synthesize bundle=_bundle - In the implementation block
@property (assign,nonatomic) BOOL alwaysTemplate;              //@synthesize alwaysTemplate=_alwaysTemplate - In the implementation block
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(BOOL)alwaysTemplate;
-(void)setAlwaysTemplate:(BOOL)arg1 ;
@end

