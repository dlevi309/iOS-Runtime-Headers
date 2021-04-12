/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AKMinimalUserInterfaceItem.h>
#import <libobjc.A.dylib/AKInkChooserUserInterfaceItem.h>

@class PKInk, NSString;

@interface AKMinimalInkChooserUserInterfaceItem : AKMinimalUserInterfaceItem <AKInkChooserUserInterfaceItem> {

	PKInk* _ink;

}

@property (nonatomic,retain) PKInk * ink;                           //@synthesize ink=_ink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKInk *)ink;
-(void)setInk:(PKInk *)arg1 ;
@end

