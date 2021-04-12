/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPFileCoordinatorDelegate.h>
#import <TSPersistence/TSPObjectContextDelegate.h>

@class NSMutableSet, NSURL, NSError, NSSet, NSString;

@interface TSPTemporaryObjectContextDelegate : NSObject <TSPFileCoordinatorDelegate, TSPObjectContextDelegate> {

	NSMutableSet* _persistenceWarnings;
	BOOL _ignoreDocumentSupport;
	NSURL* _packageURL;
	NSError* _error;

}

@property (nonatomic,copy) NSURL * packageURL;                                          //@synthesize packageURL=_packageURL - In the implementation block
@property (nonatomic,readonly) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSSet * persistenceWarnings;                             //@synthesize persistenceWarnings=_persistenceWarnings - In the implementation block
@property (assign,nonatomic) BOOL ignoreDocumentSupport;                                //@synthesize ignoreDocumentSupport=_ignoreDocumentSupport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NSFilePresenter> filePresenter; 
@property (nonatomic,readonly) BOOL isDocumentSupportTemporary; 
@property (nonatomic,readonly) BOOL areNewExternalReferencesToDataAllowed; 
-(id)init;
-(NSURL *)packageURL;
-(NSError *)error;
-(void)setPackageURL:(NSURL *)arg1 ;
-(void)addPersistenceWarnings:(id)arg1 ;
-(BOOL)ignoreDocumentSupport;
-(id)persistenceWarningsForData:(id)arg1 isReadable:(BOOL)arg2 isExternal:(BOOL)arg3 ;
-(id)initWithPackageURL:(id)arg1 ;
-(void)presentPersistenceError:(id)arg1 ;
-(void)performReadUsingAccessor:(/*^block*/id)arg1 ;
-(NSSet *)persistenceWarnings;
-(void)setIgnoreDocumentSupport:(BOOL)arg1 ;
@end

