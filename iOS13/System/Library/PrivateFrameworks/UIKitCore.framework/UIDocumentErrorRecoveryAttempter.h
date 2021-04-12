/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIDocument;

@interface UIDocumentErrorRecoveryAttempter : NSObject {

	UIDocument* _document;
	id _wrappedRecoveryAttempter;
	/*^block*/id _continuerOrNil;
	long long _silentRecoveryOptionIndex;
	/*^block*/id _appModalRecoveryAttempter;
	/*^block*/id _recoveryCancelerOrNil;
	SCD_Struct_UI30 _errorRecoveryAttempterFlags;

}
-(void)dealloc;
-(BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(BOOL)attemptSilentRecoveryFromError:(id)arg1 error:(id*)arg2 ;
-(void)cancelRecovery;
-(id)initWithDocument:(id)arg1 wrappedRecoveryAttempter:(id)arg2 ;
-(id)initWithDocument:(id)arg1 silentRecoveryOptionIndex:(unsigned long long)arg2 appModalRecoveryAttempter:(/*^block*/id)arg3 recoveryCanceler:(/*^block*/id)arg4 ;
@end

