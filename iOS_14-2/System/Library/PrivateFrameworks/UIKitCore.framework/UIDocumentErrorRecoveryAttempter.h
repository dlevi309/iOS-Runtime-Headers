/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_UI34 _errorRecoveryAttempterFlags;

}
-(id)initWithDocument:(id)arg1 silentRecoveryOptionIndex:(unsigned long long)arg2 appModalRecoveryAttempter:(/*^block*/id)arg3 recoveryCanceler:(/*^block*/id)arg4 ;
-(BOOL)attemptSilentRecoveryFromError:(id)arg1 error:(id*)arg2 ;
-(id)initWithDocument:(id)arg1 wrappedRecoveryAttempter:(id)arg2 ;
-(void)cancelRecovery;
-(BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(void)dealloc;
@end

