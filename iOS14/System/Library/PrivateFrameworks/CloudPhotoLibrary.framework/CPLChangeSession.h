/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <libobjc.A.dylib/CPLAbstractObject.h>

@class CPLPlatformObject, NSProgress, NSString, CPLLibraryManager;

@interface CPLChangeSession : NSObject <CPLAbstractObject> {

	CPLPlatformObject* _platformObject;
	NSProgress* _sessionProgress;
	NSString* _sessionIdentifier;
	CPLLibraryManager* _libraryManager;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSProgress * sessionProgress;                    //@synthesize sessionProgress=_sessionProgress - In the implementation block
@property (nonatomic,readonly) NSString * sessionIdentifier;                    //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) CPLLibraryManager * libraryManager;              //@synthesize libraryManager=_libraryManager - In the implementation block
@property (nonatomic,readonly) CPLPlatformObject * platformObject;              //@synthesize platformObject=_platformObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
+(id)platformImplementationProtocol;
+(id)stateDescriptionForState:(unsigned long long)arg1 ;
-(id)init;
-(NSString *)sessionIdentifier;
-(void)tearDownWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)description;
-(void)finalizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(CPLPlatformObject *)platformObject;
-(unsigned long long)state;
-(id)redactedDescription;
-(void)dealloc;
-(CPLLibraryManager *)libraryManager;
-(id)initWithLibraryManager:(id)arg1 ;
-(id)createSessionContext;
-(void)beginSessionWithKnownLibraryVersion:(id)arg1 resetTracker:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSProgress *)sessionProgress;
@end

