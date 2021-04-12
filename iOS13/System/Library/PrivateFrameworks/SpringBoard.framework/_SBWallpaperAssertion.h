/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBWallpaperController, NSString;

@interface _SBWallpaperAssertion : NSObject <BSInvalidatable, BSDescriptionProviding> {

	BOOL _invalidated;
	SBWallpaperController* _wallpaperController;
	long long _type;
	NSString* _reason;

}

@property (assign,getter=isInvalidated,nonatomic) BOOL invalidated;                             //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,__weak,readonly) SBWallpaperController * wallpaperController;              //@synthesize wallpaperController=_wallpaperController - In the implementation block
@property (readonly) long long type;                                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                                          //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(long long)type;
-(NSString *)reason;
-(BOOL)isInvalidated;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(SBWallpaperController *)wallpaperController;
-(id)initWithWallpaperController:(id)arg1 type:(long long)arg2 reason:(id)arg3 ;
@end

