/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFActionPrivate, NSString;

@interface PDFAction : NSObject <NSCopying> {

	PDFActionPrivate* _private;

}

@property (nonatomic,readonly) NSString * type; 
+(id)actionWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
+(Class)_classForActionDictionary:(CGPDFDictionaryRef)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)commonInit;
-(id)toolTip;
-(CFDictionaryRef)createDictionaryRef;
-(id)nextActions;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(void)_setNextAction:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(void)_setNextActions:(CGPDFArrayRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(id)toolTipNoLabel;
-(void)_setNextActions:(id)arg1 ;
-(id)baseURLForDocument:(id)arg1 ;
@end

