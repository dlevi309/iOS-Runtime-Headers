/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


#import <MediaServices/MediaServices-Structs.h>
@class NSMutableArray, MSVSystemDialogOptions, NSArray;

@interface MSVSystemDialog : NSObject {

	NSMutableArray* _textFields;
	CFUserNotificationRef _presentedUserNotification;
	CFRunLoopSourceRef _activeRunLoopSource;
	/*^block*/id _pendingCompletion;
	MSVSystemDialogOptions* _options;

}

@property (assign,nonatomic) CFUserNotificationRef presentedUserNotification; 
@property (assign,nonatomic) CFRunLoopSourceRef activeRunLoopSource; 
@property (nonatomic,copy) id pendingCompletion; 
@property (nonatomic,readonly) MSVSystemDialogOptions * options;                           //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSArray * textFields;                                       //@synthesize textFields=_textFields - In the implementation block
+(id)systemDialogWithOptions:(id)arg1 ;
-(void)dealloc;
-(MSVSystemDialogOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(NSArray *)textFields;
-(void)dismiss;
-(void)presentWithCompletion:(/*^block*/id)arg1 ;
-(void)addTextField:(id)arg1 ;
-(void)setPresentedUserNotification:(CFUserNotificationRef)arg1 ;
-(void)setPendingCompletion:(id)arg1 ;
-(void)setActiveRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(CFUserNotificationRef)presentedUserNotification;
-(CFRunLoopSourceRef)activeRunLoopSource;
-(id)pendingCompletion;
-(void)addTextFieldWithTitle:(id)arg1 secure:(BOOL)arg2 ;
-(void)clearTextFields;
@end

