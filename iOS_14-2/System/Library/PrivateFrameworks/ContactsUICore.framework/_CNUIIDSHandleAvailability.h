/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIIDSHandleAvailability.h>

@protocol CNUIIDSHandle;
@class NSString;

@interface _CNUIIDSHandleAvailability : NSObject <CNUIIDSHandleAvailability> {

	BOOL _available;
	id<CNUIIDSHandle> _handle;

}

@property (nonatomic,readonly) id<CNUIIDSHandle> handle;                       //@synthesize handle=_handle - In the implementation block
@property (getter=isAvailable,nonatomic,readonly) BOOL available;              //@synthesize available=_available - In the implementation block
@property (nonatomic,readonly) BOOL isAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isAvailable;
-(id<CNUIIDSHandle>)handle;
-(NSString *)description;
-(id)initWithHandle:(id)arg1 available:(BOOL)arg2 ;
@end

