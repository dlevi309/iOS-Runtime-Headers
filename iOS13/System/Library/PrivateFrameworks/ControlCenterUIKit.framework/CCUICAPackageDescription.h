/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/


@class NSURL;

@interface CCUICAPackageDescription : NSObject {

	BOOL _flipsForRightToLeftLayoutDirection;
	NSURL* _packageURL;

}

@property (nonatomic,copy,readonly) NSURL * packageURL;                            //@synthesize packageURL=_packageURL - In the implementation block
@property (assign,nonatomic) BOOL flipsForRightToLeftLayoutDirection;              //@synthesize flipsForRightToLeftLayoutDirection=_flipsForRightToLeftLayoutDirection - In the implementation block
+(id)descriptionForPackageNamed:(id)arg1 inBundle:(id)arg2 ;
-(BOOL)flipsForRightToLeftLayoutDirection;
-(void)setFlipsForRightToLeftLayoutDirection:(BOOL)arg1 ;
-(id)initWithPackageName:(id)arg1 inBundle:(id)arg2 ;
-(NSURL *)packageURL;
@end

