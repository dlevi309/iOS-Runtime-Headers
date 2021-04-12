/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithOptions:(id)arg1 ;
-(void)setPendingCompletion:(id)arg1 ;
-(id)pendingCompletion;
-(void)setPresentedUserNotification:(CFUserNotificationRef)arg1 ;
-(void)setActiveRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(CFUserNotificationRef)presentedUserNotification;
-(CFRunLoopSourceRef)activeRunLoopSource;
-(void)addTextFieldWithTitle:(id)arg1 secure:(BOOL)arg2 ;
-(void)clearTextFields;
-(MSVSystemDialogOptions *)options;
-(void)presentWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)textFields;
-(void)dealloc;
-(void)addTextField:(id)arg1 ;
-(void)dismiss;
@end

