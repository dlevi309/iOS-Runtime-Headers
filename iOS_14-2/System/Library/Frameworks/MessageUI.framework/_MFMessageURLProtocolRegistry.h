/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSMapTable;

@interface _MFMessageURLProtocolRegistry : NSObject {

	os_unfair_lock_s _lock;
	NSMapTable* _storage;

}

@property (nonatomic,readonly) NSMapTable * storage;              //@synthesize storage=_storage - In the implementation block
+(id)sharedRegistry;
-(id)init;
-(NSMapTable *)storage;
-(void)registerContentRepresentation:(id)arg1 ;
-(id)contentRepresentationForURL:(id)arg1 ;
@end

