/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString;

@interface _BKSEventFocusChangeObserverInfo : NSObject <BSInvalidatable> {

	BOOL _valid;
	unsigned long long _propertyUpdateGeneration;

}

@property (assign) unsigned long long propertyUpdateGeneration;              //@synthesize propertyUpdateGeneration=_propertyUpdateGeneration - In the implementation block
@property (getter=isValid) BOOL valid;                                       //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setValid:(BOOL)arg1 ;
-(id)init;
-(BOOL)isValid;
-(void)invalidate;
-(unsigned long long)propertyUpdateGeneration;
-(void)setPropertyUpdateGeneration:(unsigned long long)arg1 ;
@end

