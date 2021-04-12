/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFBluetoothHeadphoneInEarDetectionStateMutating.h>

@class AFBluetoothHeadphoneInEarDetectionState, NSString;

@interface _AFBluetoothHeadphoneInEarDetectionStateMutation : NSObject <AFBluetoothHeadphoneInEarDetectionStateMutating> {

	AFBluetoothHeadphoneInEarDetectionState* _baseModel;
	BOOL _isEnabled;
	long long _primaryEarbudSide;
	long long _primaryInEarStatus;
	long long _secondaryInEarStatus;
	struct {
		unsigned isDirty : 1;
		unsigned hasIsEnabled : 1;
		unsigned hasPrimaryEarbudSide : 1;
		unsigned hasPrimaryInEarStatus : 1;
		unsigned hasSecondaryInEarStatus : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsEnabled:(BOOL)arg1 ;
-(id)init;
-(void)setSecondaryInEarStatus:(long long)arg1 ;
-(void)setPrimaryInEarStatus:(long long)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setPrimaryEarbudSide:(long long)arg1 ;
@end

