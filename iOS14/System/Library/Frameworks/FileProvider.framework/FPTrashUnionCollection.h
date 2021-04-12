/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPUnionCollection.h>

@protocol OS_dispatch_queue;
@class FPQueryCollection, NSObject;

@interface FPTrashUnionCollection : FPUnionCollection {

	id _providerDomainChangesToken;
	FPQueryCollection* _trashQueryCollection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) FPQueryCollection * trashQueryCollection; 
-(id)scopedSearchQuery;
-(void)setDesiredNumberOfItems:(id)arg1 ;
-(void)setAllowedFileTypes:(id)arg1 ;
-(void)setExcludedFileTypes:(id)arg1 ;
-(id)filterDomains:(id)arg1 ;
-(void)updateCollectionsForDomains:(id)arg1 ;
-(void)fetchTrashItemsFromProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithQueryCollection:(id)arg1 ;
-(FPQueryCollection *)trashQueryCollection;
@end

