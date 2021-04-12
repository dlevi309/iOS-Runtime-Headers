/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIUserActionRecorder.h>

@protocol CNUIDefaultUserActionRecorderEventFactory;
@class CRRecentContactsLibrary, NSString;

@interface CNUIDefaultUserActionRecorder : NSObject <CNUIUserActionRecorder> {

	CRRecentContactsLibrary* _library;
	id<CNUIDefaultUserActionRecorderEventFactory> _eventFactory;

}

@property (nonatomic,readonly) CRRecentContactsLibrary * library;                                       //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) id<CNUIDefaultUserActionRecorderEventFactory> eventFactory;              //@synthesize eventFactory=_eventFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CRRecentContactsLibrary *)library;
-(void)recordUserAction:(id)arg1 ;
-(id)initWithRecentsLibrary:(id)arg1 eventFactory:(id)arg2 ;
-(id<CNUIDefaultUserActionRecorderEventFactory>)eventFactory;
@end

