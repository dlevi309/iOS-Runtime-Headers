/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/


@class NSMutableArray, MCUIPayloadUserInputField;

@interface MCUIFieldCollection : NSObject {

	NSMutableArray* _payloadFieldArrays;
	long long _currentPayloadIndex;
	long long _currentFieldIndex;
	MCUIPayloadUserInputField* _currentField;
	BOOL _isFinalField;

}
-(id)initWithUserInput:(id)arg1 ;
-(void)_setCurrentFieldToCurrentIndices;
-(BOOL)currentFieldIsLastInPayload;
-(void)_setIsFinalField;
-(id)userInputResponses;
-(id)currentField;
-(void)moveToNextField;
-(void)restartCurrentPayload;
-(BOOL)currentFieldIsFinalField;
-(BOOL)currentFieldIsSinglePasswordField;
-(id)responseDictionariesForCurrentPayload;
-(long long)currentPayloadIndex;
@end

