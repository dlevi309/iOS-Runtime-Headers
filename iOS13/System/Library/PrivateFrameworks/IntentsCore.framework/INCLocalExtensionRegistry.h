/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
*/


@class NSMutableDictionary;

@interface INCLocalExtensionRegistry : NSObject {

	NSMutableDictionary* _localExtensionsByIdentifier;

}
+(id)sharedInstance;
-(id)init;
-(void)registerLocalExtension:(id)arg1 ;
-(void)deregisterLocalExtension:(id)arg1 ;
-(id)localExtensions;
-(id)localExtensionForIdentifier:(id)arg1 ;
@end

