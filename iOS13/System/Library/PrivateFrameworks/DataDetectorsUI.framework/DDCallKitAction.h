/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DDCallAction.h>

@class TUCallProvider;

@interface DDCallKitAction : DDCallAction {

	TUCallProvider* _callProvider;

}

@property (retain) TUCallProvider * callProvider;              //@synthesize callProvider=_callProvider - In the implementation block
+(BOOL)hostApplicationIsEntitled;
+(id)callKitProviders;
-(id)localizedName;
-(TUCallProvider *)callProvider;
-(long long)TTYType;
-(id)dialRequest;
-(void)setCallProvider:(TUCallProvider *)arg1 ;
@end

