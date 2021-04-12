/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@protocol MSPContainerObserver <NSObject>
@optional
-(void)containerDidEraseContents:(id)arg1 fromStorageTypes:(unsigned long long)arg2;
-(id)observationQueueForContainer:(id)arg1;
-(void)containerWillEraseContents:(id)arg1;
-(void)containerWillEraseContents:(id)arg1 fromStorageTypes:(unsigned long long)arg2;
-(void)containerDidLoadFromPersister:(id)arg1;

@required
-(void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;

@end

