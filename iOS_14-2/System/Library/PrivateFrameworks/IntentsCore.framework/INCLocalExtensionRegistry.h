/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

