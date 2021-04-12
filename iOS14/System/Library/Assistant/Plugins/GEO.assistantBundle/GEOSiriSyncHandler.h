/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/GEO.assistantBundle/GEO
*/

#import <libobjc.A.dylib/AFSyncHandler.h>

@class NSArray, NSString;

@interface GEOSiriSyncHandler : NSObject <AFSyncHandler> {

	NSArray* _additionalEnabledMarkets;
	NSString* _manifestEnvironment;
	NSString* _postAnchor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)syncDidEnd;
@end

