/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXFontFamily.h>
@class NSString, NSSet;


@protocol SXFontFamily <NSObject>
@property (nonatomic,readonly) NSString * familyName; 
@property (nonatomic,readonly) NSSet * fontFaces; 
@required
-(NSString *)familyName;
-(id)fontFaceWithAttributes:(id)arg1 size:(long long)arg2;
-(NSSet *)fontFaces;

@end


@class NSString, NSSet;

@interface SXFontFamily : NSObject <SXFontFamily> {

	NSString* _familyName;
	NSSet* _fontFaces;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * familyName;               //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) NSSet * fontFaces;                   //@synthesize fontFaces=_fontFaces - In the implementation block
-(NSString *)description;
-(NSString *)familyName;
-(id)fontFaceWithAttributes:(id)arg1 size:(long long)arg2 ;
-(NSSet *)fontFaces;
-(id)initWithFamilyName:(id)arg1 faces:(id)arg2 ;
@end

