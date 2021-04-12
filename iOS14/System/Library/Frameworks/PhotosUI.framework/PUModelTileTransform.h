/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PUModelTileTransform : NSObject <NSCopying> {

	BOOL _hasUserInput;
	double _scale;
	NSString* _userInputOriginIdentifier;
	CGPoint _normalizedTranslation;
	CGPoint _overscroll;

}

@property (nonatomic,readonly) BOOL hasUserInput;                                      //@synthesize hasUserInput=_hasUserInput - In the implementation block
@property (nonatomic,readonly) double scale;                                           //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGPoint normalizedTranslation;                          //@synthesize normalizedTranslation=_normalizedTranslation - In the implementation block
@property (nonatomic,readonly) CGPoint overscroll;                                     //@synthesize overscroll=_overscroll - In the implementation block
@property (nonatomic,copy,readonly) NSString * userInputOriginIdentifier;              //@synthesize userInputOriginIdentifier=_userInputOriginIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasUserZoomedOut; 
@property (nonatomic,readonly) BOOL hasUserZoomedIn; 
-(BOOL)hasUserInput;
-(id)init;
-(NSString *)userInputOriginIdentifier;
-(double)scale;
-(CGPoint)overscroll;
-(id)description;
-(id)initWithNoUserInput;
-(id)initWithNormalizedTranslation:(CGPoint)arg1 overscroll:(CGPoint)arg2 scale:(double)arg3 userInputOriginIdentifier:(id)arg4 ;
-(BOOL)hasUserZoomedIn;
-(unsigned long long)hash;
-(BOOL)hasUserZoomedOut;
-(CGPoint)normalizedTranslation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

