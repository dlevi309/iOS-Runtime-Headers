/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setCurrentFieldToCurrentIndices;
-(BOOL)currentFieldIsLastInPayload;
-(void)_setIsFinalField;
-(id)initWithUserInput:(id)arg1 ;
-(id)userInputResponses;
-(id)currentField;
-(void)moveToNextField;
-(void)restartCurrentPayload;
-(BOOL)currentFieldIsFinalField;
-(BOOL)currentFieldIsSinglePasswordField;
-(id)responseDictionariesForCurrentPayload;
-(long long)currentPayloadIndex;
@end

