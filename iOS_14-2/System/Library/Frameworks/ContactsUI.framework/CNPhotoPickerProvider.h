/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

@class NSString;


@protocol CNPhotoPickerProvider <NSObject>
@property (nonatomic,retain) NSString * identifier; 
@required
-(id)initWithVisualIdentity:(id)arg1;
-(id)loadItemsForSize:(CGSize)arg1 scale:(double)arg2 RTL:(BOOL)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;
-(void)setIdentifier:(id)arg1;
-(NSString *)identifier;

@end

