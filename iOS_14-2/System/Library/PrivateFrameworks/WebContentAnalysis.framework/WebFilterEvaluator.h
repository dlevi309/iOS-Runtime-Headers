/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(WFRemotePINEntryViewController *)remoteViewController;
-(id)dataComplete;
-(int)filterState;
-(id)initWithResponse:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)userDidCancel;
-(void)setRemoteViewController:(WFRemotePINEntryViewController *)arg1 ;
-(id)addData:(id)arg1 ;
-(void)unblockWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)userEnteredCorrectPIN;
-(id)debugPageForPageWithData:(id)arg1 forURL:(id)arg2 debugString:(id)arg3 ;
-(id)blockPageForPageWithTitle:(id)arg1 origURL:(id)arg2 ;
-(BOOL)wasBlocked;
-(void)attemptUnblockWithCompletion:(/*^block*/id)arg1 ;
@end

