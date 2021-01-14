/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2Cancelable.h>

@class HAP2PropertyLock, NSError, NSString;

@interface HAP2CancelableObject : HAP2LoggingObject <HAP2Cancelable> {

	HAP2PropertyLock* _propertyLock;
	NSError* _cancelError;

}

@property (nonatomic,readonly) HAP2PropertyLock * propertyLock;              //@synthesize propertyLock=_propertyLock - In the implementation block
@property (nonatomic,retain) NSError * cancelError;                          //@synthesize cancelError=_cancelError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancelWithError:(id)arg1 ;
-(void)setCancelError:(NSError *)arg1 ;
-(HAP2PropertyLock *)propertyLock;
-(NSError *)cancelError;
@end

