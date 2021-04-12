/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/


@protocol HMBModelProperties
@required
+(BOOL)hmbShouldLogPrivateInformation;
+(void)setHmbShouldLogPrivateInformation:(BOOL)arg1;
-(id)hmbPropertyNamed:(id)arg1;
-(void)hmbSetProperty:(id)arg1 named:(id)arg2;
-(BOOL)hmbPropertyWasSet:(id)arg1;
-(BOOL)hmbPropertyIsReadOnly:(id)arg1;
-(id)hmbPropertyNamed:(id)arg1 isSet:(BOOL*)arg2;
-(void)hmbUnsetPropertyNamed:(id)arg1;
-(id)hmbDefaultValueForPropertyNamed:(id)arg1;
-(BOOL)hmbPropertyIsAvailable:(id)arg1;

@end

