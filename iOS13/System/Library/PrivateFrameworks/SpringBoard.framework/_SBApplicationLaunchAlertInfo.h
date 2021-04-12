/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSString, NSMutableSet;

@interface _SBApplicationLaunchAlertInfo : NSObject {

	NSString* _bundleID;
	NSMutableSet* _foregroundScenes;
	NSMutableSet* _alertItems;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                     //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSMutableSet * foregroundScenes;              //@synthesize foregroundScenes=_foregroundScenes - In the implementation block
@property (nonatomic,readonly) NSMutableSet * alertItems;                    //@synthesize alertItems=_alertItems - In the implementation block
-(id)description;
-(NSString *)bundleID;
-(id)initWithBundleID:(id)arg1 ;
-(NSMutableSet *)foregroundScenes;
-(NSMutableSet *)alertItems;
@end

