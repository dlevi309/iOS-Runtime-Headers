/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REImage;

@interface REImageContentProvider : NSObject <NSCopying, NSSecureCoding> {

	REImage* _onePieceImage;
	REImage* _twoPieceForegroundImage;
	REImage* _twoPieceBackgroundImage;

}

@property (nonatomic,readonly) REImage * onePieceImage;                        //@synthesize onePieceImage=_onePieceImage - In the implementation block
@property (nonatomic,readonly) REImage * twoPieceForegroundImage;              //@synthesize twoPieceForegroundImage=_twoPieceForegroundImage - In the implementation block
@property (nonatomic,readonly) REImage * twoPieceBackgroundImage;              //@synthesize twoPieceBackgroundImage=_twoPieceBackgroundImage - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)imageContentProviderWithOnePieceImage:(id)arg1 ;
+(id)imageContentProviderWithOnePieceImage:(id)arg1 twoPieceForegroundImage:(id)arg2 twoPieceBackgroundImage:(id)arg3 ;
+(id)imageContentProviderFromClockKitImageProvider:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(REImage *)onePieceImage;
-(id)clockKitImageProviderRepresentation;
-(id)initWithImage:(id)arg1 foregroundImage:(id)arg2 backgroundImage:(id)arg3 ;
-(REImage *)twoPieceForegroundImage;
-(REImage *)twoPieceBackgroundImage;
@end

