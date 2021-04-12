/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class FMFSession;

@interface CNUIFMFFacade : NSObject {

	FMFSession* _fmfSession;

}

@property (nonatomic,readonly) FMFSession * fmfSession;              //@synthesize fmfSession=_fmfSession - In the implementation block
-(id)init;
-(id)initWithFMFSession:(id)arg1 ;
-(void)fetchFriendHandlesWithCompletionHandler:(/*^block*/id)arg1 ;
-(FMFSession *)fmfSession;
@end

