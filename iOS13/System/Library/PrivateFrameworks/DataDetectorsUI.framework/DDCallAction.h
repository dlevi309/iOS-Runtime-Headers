/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DDTelephoneNumberAction.h>

@interface DDCallAction : DDTelephoneNumberAction
+(BOOL)isAvailable;
+(id)callProvider;
-(id)localizedName;
-(int)interactionType;
-(double)_systemFontSize;
-(BOOL)isEmail;
-(void)performFromView:(id)arg1 ;
-(BOOL)canBePerformedByOpeningURL;
-(id)notificationTitle;
-(id)notificationIconBundleIdentifier;
-(id)notificationURL;
-(id)localizedCallStringForName:(id)arg1 usingCallRelay:(BOOL)arg2 ;
-(BOOL)_titleFitsInActionSheet:(id)arg1 ;
-(id)notificationTitleTargetString;
-(id)dialRequestWithProvider:(id)arg1 ;
-(long long)TTYType;
-(id)dialRequest;
@end

