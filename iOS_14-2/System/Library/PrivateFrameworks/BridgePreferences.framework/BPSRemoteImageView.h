/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/

#import <UIKitCore/UIImageView.h>

@class NSString;

@interface BPSRemoteImageView : UIImageView {

	NSString* _desiredImageName;
	NSString* _fallbackImageName;

}

@property (nonatomic,copy) NSString * desiredImageName;               //@synthesize desiredImageName=_desiredImageName - In the implementation block
@property (nonatomic,copy) NSString * fallbackImageName;              //@synthesize fallbackImageName=_fallbackImageName - In the implementation block
-(id)init;
-(void)dealloc;
-(void)updateImagesWithAnimation:(BOOL)arg1 ;
-(NSString *)desiredImageName;
-(void)setDesiredImageName:(NSString *)arg1 ;
-(NSString *)fallbackImageName;
-(void)setFallbackImageName:(NSString *)arg1 ;
@end

