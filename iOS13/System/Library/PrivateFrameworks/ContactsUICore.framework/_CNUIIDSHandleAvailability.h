/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isAvailable; 
-(NSString *)description;
-(id<CNUIIDSHandle>)handle;
-(BOOL)isAvailable;
-(id)initWithHandle:(id)arg1 available:(BOOL)arg2 ;
@end

