/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PROPlugInManager : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedPlugInManager;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)plugIns;
-(void)registerAPIObject:(id)arg1 forProtocol:(id)arg2 version:(unsigned)arg3 ;
-(void)scanForPlugInsInBundle:(id)arg1 ;
-(void)setPlugInSearchDirectories:(id)arg1 ;
-(void)scanForPlugIns;
-(id)plugInsForProtocol:(id)arg1 ;
-(id)plugInsForProtocols:(id)arg1 ;
-(void)unregisterAPIForProtocol:(id)arg1 ;
-(void)addPlugInSearchDirectory:(id)arg1 ;
-(BOOL)checkPluginVersionAgainstBlockList:(id)arg1 blockDict:(id)arg2 ;
-(void)scanForPlugInsInDirectory:(id)arg1 ;
-(BOOL)requiresProtocolsToBePresentWhenLoading;
-(void)setRequiresProtocolsToBePresentWhenLoading:(BOOL)arg1 ;
-(id)plugInSearchDirectories;
-(void)removeAllPlugIns;
-(void)addLibraryBlockedPlugin:(id)arg1 bundleName:(id)arg2 pluginName:(id)arg3 version:(id)arg4 ;
-(void)addDocumentBlockedPlugin:(id)arg1 ;
-(BOOL)checkIfShouldBlockPlugin:(id)arg1 returnPluginDictionary:(id*)arg2 ;
-(void)getNameOverrides:(id)arg1 pluginName:(id*)arg2 bundleName:(id*)arg3 ;
-(void)removeAllBlockedDocumentPlugins;
-(void)scanForPlugInsInBundle:(id)arg1 withPluginKitPlugIn:(id)arg2 ;
-(id)plugInGroups;
-(id)plugInGroupsMutable;
-(id)plugInWithUUID:(CFUUIDRef)arg1 ;
-(id)plugInWithClassName:(id)arg1 ;
-(id)plugInGroupWithUUID:(CFUUIDRef)arg1 ;
-(id)blockedLibraryPlugins;
-(id)blockedDocumentPlugins;
-(void)unregisterAPIForProtocol:(id)arg1 version:(unsigned)arg2 ;
-(id)loadBlockPluginList:(CFStringRef)arg1 ;
@end

