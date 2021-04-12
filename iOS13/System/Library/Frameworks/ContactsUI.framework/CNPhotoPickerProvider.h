/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

@class NSString;


@protocol CNPhotoPickerProvider <NSObject>
@property (nonatomic,retain) NSString * identifier; 
@required
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(id)initWithContact:(id)arg1;
-(id)loadItemsForSize:(CGSize)arg1 scale:(double)arg2 RTL:(BOOL)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;

@end

