/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables
*/

#import <DocumentManagerExecutables/DocumentManagerExecutables-Structs.h>
#import <UIKitCore/UILabel.h>
#import <libobjc.A.dylib/DOCLabelSizing.h>

@class NSNumber;

@interface DOCLabel : UILabel <DOCLabelSizing> {

	NSNumber* useAttributedTextNumber;
	BOOL _intrinsicContentSizeShortcutDisabled;

}

@property (readonly) CGSize doc_effectiveContentSize; 
-(void)setText:(id)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(BOOL)_useShortcutIntrinsicContentSize;
-(CGSize)doc_effectiveContentSize;
@end

