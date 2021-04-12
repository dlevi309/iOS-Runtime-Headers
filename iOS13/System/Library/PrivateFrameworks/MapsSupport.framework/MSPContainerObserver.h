/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@protocol MSPContainerObserver <NSObject>
@optional
-(id)observationQueueForContainer:(id)arg1;
-(void)containerWillEraseContents:(id)arg1;
-(void)containerWillEraseContents:(id)arg1 fromStorageTypes:(unsigned long long)arg2;
-(void)containerDidEraseContents:(id)arg1 fromStorageTypes:(unsigned long long)arg2;
-(void)containerDidLoadFromPersister:(id)arg1;

@required
-(void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;

@end

