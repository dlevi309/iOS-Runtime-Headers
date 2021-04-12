/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)_library;
-(void)beginReportingChanges;
-(void)stopReportingChanges;
-(long long)valueCountForClassWithIdentifier:(id)arg1 inModelWithIdentifier:(id)arg2 ;
-(id)valueAtIndex:(long long)arg1 forClassWithIdentifier:(id)arg2 inModelWithIdentifier:(id)arg3 ;
-(id)_queryForClassID:(id)arg1 ;
-(id)_collectionsForClassID:(id)arg1 ;
-(void)_libraryChanged:(id)arg1 ;
@end

