/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDCallKitAction.h>

@class NSArray;

@interface DDSingleCallKitAction : DDCallKitAction {

	NSArray* _callProviders;

}
+(BOOL)isAvailable;
-(id)localizedName;
-(id)initWithURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
-(id)callProvider;
@end

