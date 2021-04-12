/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UISheetPresentationControllerConfiguration : NSObject <NSSecureCoding> {

	BOOL __wantsFullScreen;
	long long __mode;

}

@property (assign,setter=_setWantsFullScreen:,nonatomic) BOOL _wantsFullScreen;              //@synthesize _wantsFullScreen=__wantsFullScreen - In the implementation block
@property (assign,setter=_setMode:,nonatomic) long long _mode;                               //@synthesize _mode=__mode - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_fullScreenConfiguration;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_mode;
-(BOOL)_wantsFullScreen;
-(void)_setMode:(long long)arg1 ;
-(void)_setWantsFullScreen:(BOOL)arg1 ;
@end

