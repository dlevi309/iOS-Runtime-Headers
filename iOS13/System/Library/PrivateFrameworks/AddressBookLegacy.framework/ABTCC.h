/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/


@interface ABTCC : NSObject {

	BOOL _calledExternalChangeCallbacks;
	long long _simulateType;
	BOOL _simulateAccessPrompt;
	BOOL _simulateAccessPromptGranted;
	unsigned _simulateAccessPromptDelay;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_simulateQueue;
-(int)accessPreflight;
-(unsigned char)isAccessRestricted;
-(void)accessRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)simulate:(long long)arg1 ;
-(void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(BOOL)arg1 withDelay:(unsigned)arg2 ;
-(void)callExternalChangeCallbacks:(BOOL)arg1 ;
-(void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(BOOL)arg1 ;
@end

