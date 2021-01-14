/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBWallpaperViewController, NSString;

@interface _SBWallpaperViewControllerAssertion : NSObject <BSInvalidatable, BSDescriptionProviding> {

	BOOL _invalidated;
	SBWallpaperViewController* _wallpaperViewController;
	long long _type;
	NSString* _reason;

}

@property (assign,getter=isInvalidated,nonatomic) BOOL invalidated;                                     //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,__weak,readonly) SBWallpaperViewController * wallpaperViewController;              //@synthesize wallpaperViewController=_wallpaperViewController - In the implementation block
@property (readonly) long long type;                                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                                                  //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(BOOL)isInvalidated;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(NSString *)description;
-(id)initWithWallpaperViewController:(id)arg1 type:(long long)arg2 reason:(id)arg3 ;
-(NSString *)reason;
-(long long)type;
-(void)invalidate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(SBWallpaperViewController *)wallpaperViewController;
-(void)dealloc;
@end

