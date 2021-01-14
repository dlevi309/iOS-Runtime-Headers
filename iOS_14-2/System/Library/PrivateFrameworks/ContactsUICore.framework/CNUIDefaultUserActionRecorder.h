/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CRRecentContactsLibrary *)library;
-(id)init;
-(void)recordUserAction:(id)arg1 ;
-(id)initWithRecentsLibrary:(id)arg1 eventFactory:(id)arg2 ;
-(id<CNUIDefaultUserActionRecorderEventFactory>)eventFactory;
@end

