/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UILabel.h>
#import <libobjc.A.dylib/DOCLabelSizing.h>

@class NSNumber;

@interface DOCLabel : UILabel <DOCLabelSizing> {

	NSNumber* useAttributedTextNumber;
	BOOL _intrinsicContentSizeShortcutDisabled;

}

@property (readonly) CGSize doc_effectiveContentSize; 
-(void)setAttributedText:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(BOOL)_useShortcutIntrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)doc_effectiveContentSize;
@end

