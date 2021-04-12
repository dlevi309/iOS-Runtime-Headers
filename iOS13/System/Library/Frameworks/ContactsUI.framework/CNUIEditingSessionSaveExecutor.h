/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNUIContactSaveExecutor.h>

@class CNUICoreContactEditingSession, NSString;

@interface CNUIEditingSessionSaveExecutor : NSObject <CNUIContactSaveExecutor> {

	CNUICoreContactEditingSession* _editingSession;

}

@property (nonatomic,readonly) CNUICoreContactEditingSession * editingSession;              //@synthesize editingSession=_editingSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)executeSaveWithConfiguration:(id)arg1 ;
-(id)initWithEditingSession:(id)arg1 ;
-(CNUICoreContactEditingSession *)editingSession;
@end

