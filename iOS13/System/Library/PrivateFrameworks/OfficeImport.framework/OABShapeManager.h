/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OABShapeBaseManager.h>
#import <libobjc.A.dylib/OABPropertiesManager.h>

@class NSString;

@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager> {

	EshShape* mShape;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithShape:(EshShape*)arg1 ;
-(BOOL)hidden;
-(BOOL)isFilled;
-(BOOL)isStroked;
-(id)initWithShape:(EshShape*)arg1 masterShape:(EshShape*)arg2 ;
-(BOOL)isTextPath;
-(BOOL)isShadowed;
-(BOOL)isFillOK;
-(BOOL)isStrokeOK;
-(BOOL)isShadowOK;
-(id)textPathUnicodeString;
-(int)textPathTextAlignment;
-(int)textPathFontSize;
-(id)textPathFontFamily;
-(BOOL)textPathBold;
-(BOOL)textPathItalic;
-(BOOL)textPathUnderline;
-(BOOL)textPathSmallcaps;
-(BOOL)textPathStrikethrough;
@end

