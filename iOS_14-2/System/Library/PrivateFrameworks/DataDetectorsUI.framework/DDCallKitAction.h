/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)TTYType;
-(TUCallProvider *)callProvider;
-(id)dialRequest;
-(void)setCallProvider:(TUCallProvider *)arg1 ;
@end

