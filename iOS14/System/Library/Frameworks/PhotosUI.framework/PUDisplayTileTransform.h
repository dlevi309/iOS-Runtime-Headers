/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PUModelTileTransform;

@interface PUDisplayTileTransform : NSObject <NSCopying> {

	BOOL _hasUserInput;
	NSString* _userInputOriginIdentifier;
	double __initialScale;
	CGSize _transformPadding;
	CGSize __initialSize;
	CGSize __displaySize;
	CGAffineTransform _affineTransform;

}

@property (nonatomic,readonly) PUModelTileTransform * modelTileTransform; 
@property (assign,setter=_setHasUserInput:,nonatomic) BOOL hasUserInput;                                            //@synthesize hasUserInput=_hasUserInput - In the implementation block
@property (assign,setter=_setAffineTransform:,nonatomic) CGAffineTransform affineTransform;                         //@synthesize affineTransform=_affineTransform - In the implementation block
@property (setter=_setUserInputOriginIdentifier:,nonatomic,copy) NSString * userInputOriginIdentifier;              //@synthesize userInputOriginIdentifier=_userInputOriginIdentifier - In the implementation block
@property (assign,setter=_setTransformPadding:,nonatomic) CGSize transformPadding;                                  //@synthesize transformPadding=_transformPadding - In the implementation block
@property (assign,setter=_setInitialScale:,nonatomic) double _initialScale;                                         //@synthesize _initialScale=__initialScale - In the implementation block
@property (assign,setter=_setInitialSize:,nonatomic) CGSize _initialSize;                                           //@synthesize _initialSize=__initialSize - In the implementation block
@property (assign,setter=_setDisplaySize:,nonatomic) CGSize _displaySize;                                           //@synthesize _displaySize=__displaySize - In the implementation block
+(id)displayTileTransformWithModelTileTransform:(id)arg1 initialScale:(double)arg2 initialSize:(CGSize)arg3 displaySize:(CGSize)arg4 secondaryDisplayTileTransform:(id)arg5 ;
-(void)_setInitialSize:(CGSize)arg1 ;
-(BOOL)hasUserInput;
-(double)_initialScale;
-(id)init;
-(NSString *)userInputOriginIdentifier;
-(id)newDisplayTileTransformWithUserAffineTransform:(CGAffineTransform)arg1 userInputOriginIdentifier:(id)arg2 ;
-(void)_setUserInputOriginIdentifier:(id)arg1 ;
-(PUModelTileTransform *)modelTileTransform;
-(void)_setHasUserInput:(BOOL)arg1 ;
-(CGSize)_initialSize;
-(id)description;
-(void)_setTransformPadding:(CGSize)arg1 ;
-(void)_setAffineTransform:(CGAffineTransform)arg1 ;
-(void)_setDisplaySize:(CGSize)arg1 ;
-(CGAffineTransform)affineTransform;
-(void)_setInitialScale:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)transformPadding;
-(CGSize)_displaySize;
@end

