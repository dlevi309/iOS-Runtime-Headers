/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@class NSMutableDictionary;

@interface PVContentRegistry : NSObject {

	NSMutableDictionary* _contentDictionary;

}
+(id)sharedInstance;
+(void)willTerminate:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isContentIDRegistered:(id)arg1 ;
-(BOOL)registerContentFile:(id)arg1 forID:(id)arg2 properties:(id)arg3 ;
-(id)createContentInstance:(id)arg1 ;
-(BOOL)registerContentClass:(Class)arg1 forID:(id)arg2 type:(id)arg3 withProperties:(id)arg4 ;
-(void)initContentRegistryWithHostDelegate:(id)arg1 ;
-(void)registerBuiltIns;
-(BOOL)registerContentDictionary:(id)arg1 withBaseDir:(id)arg2 ;
-(id)lookupPropertyForID:(id)arg1 property:(id)arg2 ;
-(id)contentPropertiesForID:(id)arg1 ;
-(void)initContentRegistry;
-(BOOL)registerContentBundle:(id)arg1 ;
-(BOOL)unregisterContentID:(id)arg1 ;
-(id)listAllContentGroups;
-(id)listAllContentIDs;
-(id)listIDsForContentGroup:(id)arg1 ;
-(id)listIDsForContentGroups:(id)arg1 ;
-(id)listIDsForContentType:(id)arg1 ;
-(id)listIDsForContentTypes:(id)arg1 ;
-(id)contentGroupForID:(id)arg1 ;
-(id)contentPathForID:(id)arg1 ;
-(id)bundleForID:(id)arg1 ;
-(BOOL)isTranscription:(id)arg1 ;
-(BOOL)isSingleWordTranscription:(id)arg1 ;
-(BOOL)isSketch:(id)arg1 ;
-(BOOL)isSelfie:(id)arg1 ;
-(BOOL)hasStyleTransfer:(id)arg1 ;
@end

