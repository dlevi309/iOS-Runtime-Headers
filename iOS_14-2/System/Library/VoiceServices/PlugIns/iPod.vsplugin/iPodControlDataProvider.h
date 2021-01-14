/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VoiceServices/PlugIns/iPod.vsplugin/iPod
*/

#import <iPod/iPod-Structs.h>
#import <libobjc.A.dylib/VSRecognitionModelDataProvider.h>

@protocol OS_dispatch_queue;
@class MPMediaLibrary, NSMutableDictionary, NSObject, NSString;

@interface iPodControlDataProvider : NSObject <VSRecognitionModelDataProvider> {

	MPMediaLibrary* _library;
	NSMutableDictionary* _queriesByClassID;
	NSMutableDictionary* _collectionsByClassID;
	NSObject*<OS_dispatch_queue> _reportingQueue;
	int _suppressionToken;
	int _stopSuppressionToken;
	struct {
		unsigned observingChanges : 1;
		unsigned suppressingChanges : 1;
		unsigned pendingChanges : 1;
	}  _providerFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)_library;
-(id)_queryForClassID:(id)arg1 ;
-(void)_libraryChanged:(id)arg1 ;
-(id)_collectionsForClassID:(id)arg1 ;
-(void)beginReportingChanges;
-(void)stopReportingChanges;
-(long long)valueCountForClassWithIdentifier:(id)arg1 inModelWithIdentifier:(id)arg2 ;
-(id)valueAtIndex:(long long)arg1 forClassWithIdentifier:(id)arg2 inModelWithIdentifier:(id)arg3 ;
-(void)dealloc;
@end

