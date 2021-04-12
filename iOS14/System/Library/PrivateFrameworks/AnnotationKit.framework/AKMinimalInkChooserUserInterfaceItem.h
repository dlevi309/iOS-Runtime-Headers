/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

