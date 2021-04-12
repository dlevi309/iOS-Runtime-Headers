/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CPInterfaceControllerDelegate.h>

@class CPInterfaceController, CPListTemplate, NSDateFormatter, NSString;

@interface CKStarkConversationController : NSObject <CPInterfaceControllerDelegate> {

	CPInterfaceController* _interfaceController;
	CPListTemplate* _conversationListTemplate;
	NSDateFormatter* _dateFormatter;
	NSDateFormatter* _timeFormatter;

}

@property (nonatomic,retain) CPInterfaceController * interfaceController;              //@synthesize interfaceController=_interfaceController - In the implementation block
@property (nonatomic,retain) CPListTemplate * conversationListTemplate;                //@synthesize conversationListTemplate=_conversationListTemplate - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                          //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSDateFormatter * timeFormatter;                          //@synthesize timeFormatter=_timeFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDateFormatter *)dateFormatter;
-(NSDateFormatter *)timeFormatter;
-(void)_resortAndReloadData;
-(void)conversationListDidChange:(id)arg1 ;
-(void)setTimeFormatter:(NSDateFormatter *)arg1 ;
-(CPListTemplate *)conversationListTemplate;
-(void)templateWillAppear:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithInterfaceController:(id)arg1 ;
-(CPInterfaceController *)interfaceController;
-(void)setInterfaceController:(CPInterfaceController *)arg1 ;
-(void)setConversationListTemplate:(CPListTemplate *)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
@end

