/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <libobjc.A.dylib/MSStorageProtocol.h>

@class NSString;

@interface MSMMCSProtocol : NSObject <MSStorageProtocol> {

	NSString* _personID;
	NSString* _MMCSDirPath;
	mmcs_engineRef _engine;
	NSString* _engineDirPath;

}

@property (nonatomic,readonly) NSString * personID;                 //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) mmcs_engineRef engine;               //@synthesize engine=_engine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)computeItemIDForAsset:(id)arg1 ;
-(void)dealloc;
-(mmcs_engineRef)engine;
-(void)abort;
-(void)deactivate;
-(NSString *)personID;
-(void)didFinishUsingAssets:(id)arg1 ;
-(void)deactivateRemoveAllFiles:(BOOL)arg1 ;
-(id)initWithPersonID:(id)arg1 path:(id)arg2 ;
-(int)_getFileDescriptorFromItem:(unsigned long long)arg1 ;
-(id)_getUTIFromItem:(unsigned long long)arg1 ;
-(void)_getItemDone:(unsigned long long)arg1 path:(id)arg2 error:(id)arg3 ;
-(void)_putItemDone:(unsigned long long)arg1 putReceipt:(id)arg2 error:(id)arg3 ;
-(void)_requestCompleted;
@end

