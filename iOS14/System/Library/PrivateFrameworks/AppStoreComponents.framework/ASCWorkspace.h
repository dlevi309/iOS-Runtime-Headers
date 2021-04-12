/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


@interface ASCWorkspace : NSObject

@property (getter=isExtension,nonatomic,readonly) BOOL extension; 
+(id)sharedWorkspace;
+(void)withSharedWorkspace:(id)arg1 perform:(/*^block*/id)arg2 ;
-(id)openURL:(id)arg1 ;
-(id)_init;
-(BOOL)isExtension;
-(id)openSensitiveURL:(id)arg1 ;
@end

