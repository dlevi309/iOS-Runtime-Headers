/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/

#import <libobjc.A.dylib/WFPINEntryViewControllerProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSMutableData, WFRemotePINEntryViewController;

@interface WebFilterEvaluator : NSObject <WFPINEntryViewControllerProtocol, NSSecureCoding> {

	unsigned long long _filterState;
	NSURL* _url;
	NSString* _pageTitle;
	NSMutableData* _buffer;
	/*^block*/id _completion;
	WFRemotePINEntryViewController* _remoteViewController;

}

@property (nonatomic,retain) WFRemotePINEntryViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isManagedSession;
+(id)createWithResponse:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(WFRemotePINEntryViewController *)remoteViewController;
-(void)setRemoteViewController:(WFRemotePINEntryViewController *)arg1 ;
-(id)initWithResponse:(id)arg1 ;
-(id)addData:(id)arg1 ;
-(void)unblockWithCompletion:(/*^block*/id)arg1 ;
-(id)dataComplete;
-(int)filterState;
-(void)userDidCancel;
-(void)userEnteredCorrectPIN;
-(id)debugPageForPageWithData:(id)arg1 forURL:(id)arg2 debugString:(id)arg3 ;
-(id)blockPageForPageWithTitle:(id)arg1 origURL:(id)arg2 ;
-(BOOL)wasBlocked;
-(void)attemptUnblockWithCompletion:(/*^block*/id)arg1 ;
@end

