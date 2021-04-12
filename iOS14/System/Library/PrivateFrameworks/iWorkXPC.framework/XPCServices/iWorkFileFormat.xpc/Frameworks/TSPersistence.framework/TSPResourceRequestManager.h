/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSUResourceRequestObserver.h>
#import <TSPersistence/TSUResourceRequestObservable.h>

@class TSUObserverNotifier, NSString;

@interface TSPResourceRequestManager : NSObject <TSUResourceRequestObserver, TSUResourceRequestObservable> {

	TSUObserverNotifier* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(id)createResourceRequestForTags:(id)arg1 resourceContext:(id)arg2 ;
-(void)resourceRequestWillPerformResourceAccess:(id)arg1 ;
-(void)resourceRequestDidPerformResourceAccess:(id)arg1 error:(id)arg2 ;
-(id)createResourceRequestForDocumentResourceInfos:(id)arg1 resourceContext:(id)arg2 ;
-(long long)resourceAccessTypeForResourceRequest:(id)arg1 ;
@end

