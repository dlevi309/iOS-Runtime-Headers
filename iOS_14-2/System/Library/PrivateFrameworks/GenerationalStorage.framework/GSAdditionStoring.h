/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
*/

@class NSURL;


@protocol GSAdditionStoring
@property (retain) NSURL * documentURL; 
@property (nonatomic,readonly) id<NSCopying><NSSecureCoding> persistentIdentifier; 
@required
-(id)enumeratorForAdditionsInNameSpace:(id)arg1 withOptions:(unsigned long long)arg2 withoutOptions:(unsigned long long)arg3 ordering:(int)arg4;
-(id)prepareAdditionCreationWithItemAtURL:(id)arg1 byMoving:(BOOL)arg2 creationInfo:(id)arg3 error:(id*)arg4;
-(void)createAdditionStagedAtURL:(id)arg1 creationInfo:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeAllAdditionsForNamespaces:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeAdditions:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)additionWithName:(id)arg1 inNameSpace:(id)arg2 error:(id*)arg3;
-(NSURL *)documentURL;
-(id<NSCopying><NSSecureCoding>)persistentIdentifier;
-(void)cleanupStagingURL:(id)arg1;
-(void)setDocumentURL:(id)arg1;
-(BOOL)replaceDocumentWithContentsOfAddition:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id*)arg3 error:(id*)arg4;
-(id)stagingURLforCreatingAdditionWithError:(id*)arg1;
-(id)URLforReplacingItemWithError:(id*)arg1;
-(BOOL)replaceDocumentWithContentsOfItemAtURL:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id*)arg3 error:(id*)arg4;
-(id)additionsWithNames:(id)arg1 inNameSpace:(id)arg2 error:(id*)arg3;

@end

