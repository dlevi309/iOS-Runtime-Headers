/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CNUICoreContactEditingSession *)editingSession;
-(id)initWithEditingSession:(id)arg1 ;
@end

