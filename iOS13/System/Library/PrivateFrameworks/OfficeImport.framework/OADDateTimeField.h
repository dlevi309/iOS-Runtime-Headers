/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADTextField.h>

@interface OADDateTimeField : OADTextField {

	int _format;

}

@property (assign,nonatomic) int format;              //@synthesize format=_format - In the implementation block
-(id)init;
-(BOOL)isEmpty;
-(int)format;
-(void)setFormat:(int)arg1 ;
-(BOOL)isSimilarToTextRun:(id)arg1 ;
@end

