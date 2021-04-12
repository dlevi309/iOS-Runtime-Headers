/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface IPAAutoRegistry : NSObject {

	NSObject*<OS_dispatch_queue> _serializer;
	NSMutableDictionary* _entries;

}
+(id)sharedRegistry;
+(void)setSharedRegistry:(id)arg1 ;
-(id)init;
-(void)registerAutoCalculatorSettingsClass:(Class)arg1 toAutoIdentifier:(id)arg2 operationIdentifier:(id)arg3 ;
-(void)registerAutoCalculatorSettingsClass:(Class)arg1 toAutoIdentifier:(id)arg2 operationIdentifier:(id)arg3 persistable:(BOOL)arg4 ;
-(id)_entryForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2 ;
-(BOOL)hasMappingForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2 ;
-(Class)settingsClassForAutoIdentifier:(id)arg1 operationIdentifier:(id)arg2 ;
-(BOOL)isPersistableAutoIdentifier:(id)arg1 forOperationIdentifier:(id)arg2 ;
@end

