/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
*/

#import <DASubCal/SubCalDATask.h>
#import <libobjc.A.dylib/SubCalURLRequestDelegate.h>

@protocol SubCalValidationTaskDelegate;
@class NSURL, NSString, SubCalURLRequest, NSData;

@interface SubCalValidationTask : SubCalDATask <SubCalURLRequestDelegate> {

	BOOL _performQuickValidation;
	BOOL _foundBeginVCal;
	BOOL _foundCalName;
	id<SubCalValidationTaskDelegate> _delegate;
	NSURL* _subscriptionURL;
	NSString* _username;
	NSString* _password;
	SubCalURLRequest* _request;
	NSData* _icsData;
	NSString* _calendarName;
	unsigned long long _searchIndex;

}

@property (nonatomic,retain) SubCalURLRequest * request;                                    //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSData * icsData;                                              //@synthesize icsData=_icsData - In the implementation block
@property (nonatomic,retain) NSString * calendarName;                                       //@synthesize calendarName=_calendarName - In the implementation block
@property (assign,nonatomic) BOOL foundBeginVCal;                                           //@synthesize foundBeginVCal=_foundBeginVCal - In the implementation block
@property (assign,nonatomic) BOOL foundCalName;                                             //@synthesize foundCalName=_foundCalName - In the implementation block
@property (assign,nonatomic) unsigned long long searchIndex;                                //@synthesize searchIndex=_searchIndex - In the implementation block
@property (assign,nonatomic,__weak) id<SubCalValidationTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * subscriptionURL;                                       //@synthesize subscriptionURL=_subscriptionURL - In the implementation block
@property (nonatomic,retain) NSString * username;                                           //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;                                           //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL performQuickValidation;                                   //@synthesize performQuickValidation=_performQuickValidation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SubCalValidationTaskDelegate>)delegate;
-(void)setDelegate:(id<SubCalValidationTaskDelegate>)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setRequest:(SubCalURLRequest *)arg1 ;
-(SubCalURLRequest *)request;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(unsigned long long)searchIndex;
-(void)setSearchIndex:(unsigned long long)arg1 ;
-(void)didFinish;
-(void)performTask;
-(void)setIcsData:(NSData *)arg1 ;
-(NSData *)icsData;
-(NSString *)calendarName;
-(void)setCalendarName:(NSString *)arg1 ;
-(NSURL *)subscriptionURL;
-(void)setSubscriptionURL:(NSURL *)arg1 ;
-(void)willFinish;
-(void)setPerformQuickValidation:(BOOL)arg1 ;
-(BOOL)performQuickValidation;
-(void)subCalURLRequest:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3 ;
-(void)subCalURLRequest:(id)arg1 updatedData:(id)arg2 ;
-(void)subCalURLRequest:(id)arg1 didRedirectToURL:(id)arg2 ;
-(void)handleTrustChallenge:(id)arg1 forSubCalURLRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performDelegateCallbackWithError:(id)arg1 ;
-(void)_tryQuickValidationCurrentData:(id)arg1 ;
-(void)setFoundBeginVCal:(BOOL)arg1 ;
-(BOOL)foundCalName;
-(void)setFoundCalName:(BOOL)arg1 ;
-(id)_stringBeforeNewline:(const char*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)foundBeginVCal;
-(BOOL)_isInvalidVCalBeginningForData:(id)arg1 ;
-(id)_searchForCalNameInConnectionData:(id)arg1 ;
-(void)handleTrustChallenge:(id)arg1 forSubCalURLRequest:(id)arg2 ;
@end

