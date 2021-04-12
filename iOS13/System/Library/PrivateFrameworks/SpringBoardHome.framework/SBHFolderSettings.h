/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <PrototypeTools/PTSettings.h>

@interface SBHFolderSettings : PTSettings {

	BOOL _allowNestedFolders;
	BOOL _pinchToClose;
	BOOL _oneColumnAtATime;
	BOOL _sortsIconsAlphabetically;
	double _minPinchScale;

}

@property (assign,nonatomic) BOOL allowNestedFolders;                    //@synthesize allowNestedFolders=_allowNestedFolders - In the implementation block
@property (assign,nonatomic) BOOL pinchToClose;                          //@synthesize pinchToClose=_pinchToClose - In the implementation block
@property (assign,nonatomic) double minPinchScale;                       //@synthesize minPinchScale=_minPinchScale - In the implementation block
@property (assign,nonatomic) BOOL oneColumnAtATime;                      //@synthesize oneColumnAtATime=_oneColumnAtATime - In the implementation block
@property (assign,nonatomic) BOOL sortsIconsAlphabetically;              //@synthesize sortsIconsAlphabetically=_sortsIconsAlphabetically - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)minPinchScale;
-(BOOL)allowNestedFolders;
-(BOOL)oneColumnAtATime;
-(BOOL)pinchToClose;
-(void)setAllowNestedFolders:(BOOL)arg1 ;
-(void)setPinchToClose:(BOOL)arg1 ;
-(void)setMinPinchScale:(double)arg1 ;
-(void)setOneColumnAtATime:(BOOL)arg1 ;
-(void)setSortsIconsAlphabetically:(BOOL)arg1 ;
-(BOOL)sortsIconsAlphabetically;
@end

