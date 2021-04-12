/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@class CKShareMetadata;

@interface UIHandleCloudKitShareAction : BSAction {

	CKShareMetadata* _cachedMetadata;

}

@property (nonatomic,readonly) CKShareMetadata * shareMetadata; 
+(id)cloudKitShareActionWithShareMetadata:(id)arg1 ;
+(void)loadCloudKitFramework;
-(id)data;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(long long)UIActionType;
-(CKShareMetadata *)shareMetadata;
-(id)initWithShareMetadata:(id)arg1 ;
@end

