/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDRemoteAction.h>

@class CNContact;

@interface DDPersonAction : DDRemoteAction {

	CNContact* _contact;
	BOOL _contactExists;

}
+(id)supportedSchemes;
+(BOOL)handlesUrl:(id)arg1 result:(DDResultRef)arg2 ;
+(id)viewControllerProviderClass;
-(BOOL)prefersActionMenuStyle;
-(id)initWithURL:(id)arg1 result:(DDResultRef)arg2 context:(id)arg3 ;
-(id)menuActions;
-(CGSize)suggestedContentSize;
-(id)_appendActionsForPhoneNumbers:(id)arg1 emailAddresses:(id)arg2 class:(Class)arg3 filter:(id)arg4 scheme:(id)arg5 ;
-(id)_menuActionsForBusinessWithNumber:(id)arg1 ;
-(id)_menuActionsForPersonWithNumber:(id)arg1 email:(id)arg2 ;
@end

