/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <libobjc.A.dylib/DNDSSysdiagnoseDataProvider.h>
#import <libobjc.A.dylib/DNDSBackingStore.h>

@protocol DNDSBackingStoreDelegate;
@class NSString, NSURL;

@interface DNDSJSONBackingStore : NSObject <DNDSSysdiagnoseDataProvider, DNDSBackingStore> {

	Class _recordClass;
	NSURL* _fileURL;
	unsigned long long _versionNumber;
	BOOL _deviceOutOfSpace;
	id<DNDSBackingStoreDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * sysdiagnoseDataIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<DNDSBackingStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<DNDSBackingStoreDelegate>)delegate;
-(NSString *)sysdiagnoseDataIdentifier;
-(id)sysdiagnoseDataForDate:(id)arg1 ;
-(void)setDelegate:(id<DNDSBackingStoreDelegate>)arg1 ;
-(void)dealloc;
-(id)readRecordWithError:(id*)arg1 ;
-(unsigned long long)writeRecord:(id)arg1 error:(id*)arg2 ;
-(id)initWithRecordClass:(Class)arg1 fileURL:(id)arg2 versionNumber:(unsigned long long)arg3 ;
@end

