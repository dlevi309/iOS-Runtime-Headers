/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPEncoderWriteCoordinatorDelegate.h>

@class TSPObjectContext, TSPDeepCopyObjectMap, NSString;

@interface TSPDeepCopyWriteAssistant : NSObject <TSPEncoderWriteCoordinatorDelegate> {

	TSPObjectContext* _context;
	TSPDeepCopyObjectMap* _objectMap;
	BOOL _resetObjectUUIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)objectTargetType;
-(long long)componentWriterMode;
-(id)createMetadataForRootObject:(id)arg1 readVersion:(unsigned long long)arg2 dataArchiver:(id)arg3 archivedObjects:(id)arg4 componentObjectUUIDMap:(id)arg5 externalReferences:(id)arg6 weakExternalReferences:(id)arg7 lazyReferences:(id)arg8 dataReferences:(id)arg9 error:(id*)arg10 ;
-(BOOL)skipMetadataObjectSerialization;
-(id)initWithContext:(id)arg1 objectMap:(id)arg2 ;
-(void)encodeDeepCopyOfObject:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

