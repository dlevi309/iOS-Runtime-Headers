/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
*/

#import <HardwareSupport/HardwareSupport-Structs.h>
#import <libobjc.A.dylib/HSCMBaseObjectInterface.h>

@class NSString;

@interface HSCMBaseObject : NSObject <HSCMBaseObjectInterface> {

	OpaqueCMBaseObjectRef _underlyingObject;

}

@property (nonatomic,readonly) OpaqueCMBaseObjectRef underlyingObject;              //@synthesize underlyingObject=_underlyingObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)statusDescription:(int)arg1 ;
-(OpaqueCMBaseObjectRef)underlyingObject;
-(id)valueForProperty:(CFStringRef)arg1 error:(id*)arg2 ;
-(BOOL)setValue:(id)arg1 forProperty:(CFStringRef)arg2 error:(id*)arg3 ;
-(id)initWithBaseObject:(OpaqueCMBaseObjectRef)arg1 ;
@end

