/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isShadowed;
-(BOOL)hidden;
-(BOOL)isFilled;
-(id)initWithShape:(EshShape*)arg1 ;
-(BOOL)isStroked;
-(id)initWithShape:(EshShape*)arg1 masterShape:(EshShape*)arg2 ;
-(BOOL)isTextPath;
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

