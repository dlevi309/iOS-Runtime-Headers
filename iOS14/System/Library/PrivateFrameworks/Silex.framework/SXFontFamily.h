/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXFontFamily.h>
@class NSString, NSSet;


@protocol SXFontFamily <NSObject>
@property (nonatomic,readonly) NSString * familyName; 
@property (nonatomic,readonly) NSSet * fontFaces; 
@required
-(NSString *)familyName;
-(NSSet *)fontFaces;
-(id)fontFaceWithAttributes:(id)arg1 size:(long long)arg2;

@end


@class NSString, NSSet;

@interface SXFontFamily : NSObject <SXFontFamily> {

	NSString* _familyName;
	NSSet* _fontFaces;

}

@property (nonatomic,readonly) NSString * familyName;               //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) NSSet * fontFaces;                   //@synthesize fontFaces=_fontFaces - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)familyName;
-(id)initWithFamilyName:(id)arg1 faces:(id)arg2 ;
-(NSSet *)fontFaces;
-(NSString *)description;
-(id)fontFaceWithAttributes:(id)arg1 size:(long long)arg2 ;
@end

