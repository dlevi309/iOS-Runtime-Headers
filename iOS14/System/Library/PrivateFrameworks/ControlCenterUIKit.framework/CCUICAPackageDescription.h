/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)packageURL;
-(BOOL)flipsForRightToLeftLayoutDirection;
-(id)initWithPackageName:(id)arg1 inBundle:(id)arg2 ;
-(void)setFlipsForRightToLeftLayoutDirection:(BOOL)arg1 ;
@end

