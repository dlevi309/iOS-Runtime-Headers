/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIIDSHandleAvailability.h>

@protocol CNUIIDSHandle;
@class NSString;

@interface TestCNUIIDSHandleAvailability : NSObject <CNUIIDSHandleAvailability> {

	BOOL _available;
	id<CNUIIDSHandle> _handle;

}

@property (nonatomic,retain) id<CNUIIDSHandle> handle;              //@synthesize handle=_handle - In the implementation block
@property (assign,nonatomic) BOOL available;                        //@synthesize available=_available - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isAvailable; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<CNUIIDSHandle>)handle;
-(BOOL)isAvailable;
-(void)setAvailable:(BOOL)arg1 ;
-(void)setHandle:(id<CNUIIDSHandle>)arg1 ;
-(BOOL)available;
-(id)initWithHandle:(id)arg1 availability:(BOOL)arg2 ;
@end

