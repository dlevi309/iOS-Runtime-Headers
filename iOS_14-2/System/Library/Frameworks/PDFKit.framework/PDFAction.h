/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setType:(NSString *)arg1 ;
-(void)commonInit;
-(id)description;
-(NSString *)type;
-(id)toolTip;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CFDictionaryRef)createDictionaryRef;
-(id)nextActions;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(void)_setNextAction:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(void)_setNextActions:(CGPDFArrayRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(id)toolTipNoLabel;
-(void)_setNextActions:(id)arg1 ;
-(id)baseURLForDocument:(id)arg1 ;
@end

