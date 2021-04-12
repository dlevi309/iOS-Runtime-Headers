/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

